//
//  ViewController.swift
//  Example
//
//  Created by Dmitry Korotchenkov on 02/08/2017.
//  Copyright © 2017 Sidestep. All rights reserved.
//

import UIKit
import SidestepSDK

class ViewController: UIViewController {

    @IBOutlet weak var multipleArtistsSwitch: UISwitch!
    @IBOutlet weak var artistsTF: UITextField!
    @IBOutlet weak var preselectedArtistTF: UITextField!
    @IBOutlet weak var preselectedShowTF: UITextField!
    @IBOutlet weak var scrollView: UIScrollView!
    
    var sdk: SidestepSDK?
    
    override init(nibName nibNameOrNil: String?, bundle nibBundleOrNil: Bundle?) {
        super.init(nibName: nibNameOrNil, bundle: nibBundleOrNil)
        NotificationCenter.default.addObserver(self, selector: #selector(ViewController.updateKeyboardFrame(_:)) , name: NSNotification.Name.UIKeyboardWillShow, object: nil)
        NotificationCenter.default.addObserver(self, selector: #selector(ViewController.updateKeyboardFrame(_:)) , name: NSNotification.Name.UIKeyboardWillHide, object: nil)
        NotificationCenter.default.addObserver(self, selector: #selector(ViewController.updateKeyboardFrame(_:)) , name: NSNotification.Name.UIKeyboardWillChangeFrame, object: nil)
        self.view.addGestureRecognizer(UITapGestureRecognizer(target: self, action: #selector(ViewController.tapGesture)))
        self.scrollView.keyboardDismissMode = UIScrollViewKeyboardDismissMode.interactive
        self.updateViewState()
    }
    
    required convenience init?(coder aDecoder: NSCoder) {
        self.init(nibName: "ViewController", bundle: Bundle(for: ViewController.self))
    }
    
    deinit {
        NotificationCenter.default.removeObserver(self)
    }
    
    private func updateViewState() {
        self.artistsTF.isEnabled = self.multipleArtistsSwitch.isOn
    }
    
    @objc private func tapGesture() {
        UIApplication.shared.sendAction(#selector(UIResponder.resignFirstResponder), to: nil, from: nil, for: nil)
    }
    
    @IBAction func switchDidChangeValue() {
        self.updateViewState()
    }
    
    @IBAction func confirmButtonTap() {
        let multipleArtists = self.multipleArtistsSwitch.isOn
        var configuration = SidestepSDKConfiguration(multipleArtists: multipleArtists)
        func extractId(_ idOrSlug: String) -> Int? {
            let numbersSet = CharacterSet(charactersIn: "1234567890")
            let isId = idOrSlug.stringByReplacingCharacters(fromCharacterSet: numbersSet, byString: "").characters.count == 0
            if isId, let id = Int(idOrSlug) {
                return id
            } else {
                return nil
            }
        }
        if multipleArtists {
            if let idsOrSlugs = self.artistsTF.text?.replacingOccurrences(of: " ", with: "").components(separatedBy: ","), idsOrSlugs.count > 0 {
                var slugs: [String] = []
                var ids: [Int] = []
                for idOrSlug in idsOrSlugs {
                    if idOrSlug.characters.count > 0 {
                        if let id = extractId(idOrSlug) {
                            ids.append(id)
                        } else {
                            slugs.append(idOrSlug)
                        }
                    }
                }
                if slugs.count > 0 {
                    configuration.filterArtistsBySlugs(slugs)
                }
                if ids.count > 0 {
                    configuration.filterArtistsByIds(ids)
                }
            }
        }
        
        if let idOrSlug = self.preselectedArtistTF.text?.replacingOccurrences(of: " ", with: "") , idOrSlug.characters.count > 0 {
            if let id = extractId(idOrSlug) {
                configuration.preselectArtistUsingId(id)
            } else {
                configuration.preselectArtistUsingSlug(idOrSlug)
            }
        }
        
        if let idOrDate = self.preselectedShowTF.text?.replacingOccurrences(of: " ", with: ""), idOrDate.characters.count > 0 {
            if let id = extractId(idOrDate) {
                configuration.preselectShowUsingId(id)
            } else {
                let formatter = DateFormatter()
                formatter.dateFormat = "dd-MM-yyyy"
                if let date = formatter.date(from: idOrDate) {
                    let components = Calendar.current.dateComponents([.day, .month, .year], from: date)
                    configuration.preselectShowUsingDate(components)
                }
            }
        }
        
        
        let sdk = SidestepSDK(configuration: configuration, token: "ios_consumer_app_token", useTestingServer: true)
        self.sdk = sdk
        self.present(sdk.navigationController!, animated: true, completion: nil)
        sdk.closeBlock = {
            self.dismiss(animated: true, completion: nil)
        }
    }
    
    // MARK: keyboard appearance
    
    @objc private func updateKeyboardFrame(_ object: NSNotification) {
        let frame = (object.userInfo?[UIKeyboardFrameEndUserInfoKey] as? NSValue)?.cgRectValue ?? CGRect.zero
        let screenBounds = UIScreen.main.bounds
        let height = screenBounds.size.height - frame.origin.y
        var inset = self.scrollView.contentInset
        inset.bottom = height - (self.view.height - self.scrollView.bottom)
        self.scrollView.contentInset = inset
    }


}


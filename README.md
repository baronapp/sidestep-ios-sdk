# Sidestep iOS SDK
The Sidestep SDK is used to display an artist's store inside of an iOS app. For example, if you are the developer of the Fall Out Boy app, you can implement the SDK to allow customers to purchase for Fall Out Boy merchandise without leaving your app. 

### How does it work?
You can install the SDK into your app via cocoa pods, carthage, or by dragging & dropping the SDK into Xcode. With just a few lines of code, you can launch the Sidestep store inside of your app. There are two ways to show the store:

1. By launching the Sidestep app if your user has the Sidstep app installed
2. By launching the Sidstep store inside of your app without the user leaving your app.

### How are updates handled?
We are constantly updating the iOS SDK and we will support older versions as much as possible. If the SDK becomes out of date or obselete, the SDk will automatically show the webstore version of the artist's store to prevent a broken user experience. We think this is a great solution. 

### How do you implement the Sidestep iOS SDK? [for your developer]
To implement SDK into your app use `SidestepSDK` class.


1. `init(configuration: SidestepSDKConfiguration, token: String, useTestingServer: Bool = false)`, where:

 `configuration` - structure that you can use to configure Sidestep SDK. Using this structure you can: 
  - go straight into the merch for a given artist and show (preselected)  
  - have ability to support multiple artists
  - initialize Sidestep SDK with artist as a sting or an artist id

 `token` - token for using the SDK. You can get your token and the artist id by emailing <matt@sidestepapp.com>

 `useTestingServer` - optional, default: false, provide true if you want to use our testing server



2. `var navigationController: UINavigationController?`

3. `navigationController` - present this controller in your application

4. `var closeBlock: (() -> Void)?` - the handler of the action when user taps close button in SDK stack

### Notes
  
To be able to use credit card scanner on checkout process, you need to add `Privacy - Camera Usage Description (NSCameraUsageDescription)` to your application's Info.plist file.

# Installing the SDK

### CocoaPods

Add this to you Podfile:

`pod 'SidestepSDK', :git => 'git@github.com:SidestepTechnologies/ios-sdk.git', :tag => '1.0.3'`


### Other

SidestepSDK framework should be added to Embedded Binaries in your project.

Our SDK has the following depdencies. If you add the `SidestepSDK.framework` to your project you need to add these libraries as well:
```
'Alamofire', '~> 4.0'
'SwiftyJSON', '~> 3.1'
'AlamofireImage', '~> 3.1'
'MBProgressHUD', '~> 0.8'
'CardIO', '~> 5.4'
'Stripe', '~> 9.0'
```


### License

License available [here](https://github.com/SidestepTechnologies/ios-sdk/blob/master/LICENSE). 

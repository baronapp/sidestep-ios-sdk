# ios-sdk
iOS SDK for the store used by 3rd parties and eventually our own apps. It allows you to display a store in  your app for a selected artist. For example, if you are the developer of the Fall Out Boy app, you can implement the SDK to allow customers to purchase for Fall Out Boy merchandise without leaving your app. 

### How it works?
You can simply install the SDK into your app. Inside your app you can show artist store to the user at any moment, you just need to add few lines of code inside your app. 
You can set up the SDK this way, if the user already has Sidestep app on his device it will be opened. Or you can always show artist store inside your app if you don't want user leaves your app.

### How are updates handled?
We will update iOS SDK constantly and we will support older versions as much as possible. But if SDK version is very old and we don't support it anymore, it will not make affect to your app.  In this case instead of showing native artist store we will show the web version of artist store. The web version is always up to date.

### How to implement SDK?
To implement SDK into your app use SidestepSDK class.
It contains following:

`init(artistId: Int, token: String, allowsNativeApp: Bool = true, useTestingServer: Bool = false)`

For example: `SidestepSDK(artistId:14, token: "ios_consumer_app_token", allowsNativeApp: false)` will automatically launch the Sidestep store in a modal for artist 14. You can get the token by emailing <support@sidestepapp.com>.

artistId - identifier of artist that will be shown in SDK

token - token for using the SDK

allowsNativeApp - optional, default - true, provide false if you don't want to open artist store in Sidestep app (if it's installed on device)

useTestingServer - optional, default - false, provide true if you want to use our testing server

`var navigationController: UINavigationController?`

navigationController - present this controller in your application


`var closeBlock: (() -> Void)?`

the handler of the action when user taps close button in SDK stack

# install SDK

### CocoaPods

Simply add this to you Podfile:

`pod 'SidestepSDK', :git => 'git@github.com:SidestepTechnologies/ios-sdk.git', :tag => '1.0.0'`


### Other

SidestepSDK framework should be added to Embedded Binaries in your project.

Our SDK has the following depdencies. If you add the `SidestepSDK.framework` to your project you need to add these libraries as well:
```
'Alamofire', '~> 3.3.1'
'SwiftyJSON', '~> 2.3.2'
'CoreStore', '~> 1.6.3'
'AlamofireImage', '~> 2.4.0'
'MBProgressHUD', '~> 0.8'
'CardIO', '~> 5.2.2'
'Stripe', '~> 6.0.1'
```

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
It contains following:

`init(artistId: Int, token: String, allowsNativeApp: Bool = true, useTestingServer: Bool = false)`

For example: `SidestepSDK(artistId:14, token: "ios_consumer_app_token", allowsNativeApp: false)` will automatically launch the Sidestep store in a modal for artist 14. You can get your token and the artist id by emailing <matt@@sidestepapp.com>.

`artistId` - identifier of artist that will be shown in SDK

`token` - token for using the SDK

`allowsNativeApp` - optional, default:  true, provide false if you don't want to open artist store in Sidestep app (if it's installed on device)

`useTestingServer` - optional, default: false, provide true if you want to use our testing server

`var navigationController: UINavigationController?`

`navigationController` - present this controller in your application


`var closeBlock: (() -> Void)?`

the handler of the action when user taps close button in SDK stack

# Installing the SDK

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


### License

License available [here](https://github.com/SidestepTechnologies/ios-sdk/blob/master/LICENSE). 

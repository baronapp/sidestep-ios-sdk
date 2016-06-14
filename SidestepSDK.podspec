Pod::Spec.new do |spec|
    spec.name = 'SidestepSDK'
    spec.version = '1.0.0'
    spec.platform = :ios
    spec.summary = 'Sidestep iOS SDK'
    spec.homepage = 'https://github.com/SidestepTechnologies/ios-sdk'
    spec.authors = { 'Sidestep' }
    spec.source = { :git => 'git@github.com:SidestepTechnologies/ios-sdk.git' }
    spec.source_files = 'SidestepSDK'
    spec.requires_arc = true
    spec.ios.deployment_target = '8.0'
    spec.ios.vendored_frameworks = 'SidestepSDK/SidestepSDK.framework'

    spec.dependency 'Alamofire', '~> 3.3.1'
    spec.dependency 'SwiftyJSON', '~> 2.3.2'
    spec.dependency 'CoreStore', '~> 1.6.3'
    spec.dependency 'AlamofireImage', '~> 2.4.0'
    spec.dependency 'MBProgressHUD', '~> 0.8'
    spec.dependency 'CardIO', '~> 5.2.2'
    spec.dependency 'Stripe', '~> 6.0.1'
end

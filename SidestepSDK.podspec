Pod::Spec.new do |spec|
    spec.name = 'SidestepSDK'
    spec.version = '1.0.1'
    spec.license = { :type => 'Sidestep MIT License'}
    spec.platform = :ios
    spec.summary = 'Sidestep iOS SDK'
    spec.homepage = 'https://github.com/SidestepTechnologies/ios-sdk'
    spec.authors = { 'Sidestep Technologies Inc' => 'support@sidestepapp.com' }
    spec.source = { :git => 'git@github.com:SidestepTechnologies/ios-sdk.git', :tag => spec.version }
    spec.source_files = 'SidestepSDK'
    spec.requires_arc = true
    spec.ios.deployment_target = '8.0'
    spec.ios.vendored_frameworks = 'SidestepSDK/SidestepSDK.framework'

    spec.dependency 'Alamofire', '~> 3.5.1'
    spec.dependency 'SwiftyJSON', '~> 2.4.0'
    spec.dependency 'CoreStore', '~> 2.1.2'
    spec.dependency 'AlamofireImage', '~> 2.5.0'
    spec.dependency 'MBProgressHUD', '~> 0.8'
    spec.dependency 'CardIO', '~> 5.4.1'
    spec.dependency 'Stripe', '~> 6.0.1'
end
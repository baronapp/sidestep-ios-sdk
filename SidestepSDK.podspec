Pod::Spec.new do |spec|
    spec.name = 'SidestepSDK'
    spec.version = '1.0.4'
    spec.license = { :type => 'Sidestep MIT License'}
    spec.platform = :ios
    spec.summary = 'Sidestep iOS SDK'
    spec.homepage = 'https://github.com/SidestepTechnologies/ios-sdk'
    spec.authors = { 'Sidestep Technologies Inc' => 'support@sidestepapp.com' }
    spec.source = { :git => 'git@github.com:SidestepTechnologies/ios-sdk.git', :tag => spec.version }
    spec.source_files = 'SidestepSDK'
    spec.requires_arc = true
    spec.ios.deployment_target = '9.0'
    spec.ios.vendored_frameworks = 'SidestepSDK/SidestepSDK.framework'

    spec.dependency 'Alamofire', '~> 4.0'
    spec.dependency 'SwiftyJSON', '~> 3.1'
    spec.dependency 'AlamofireImage', '~> 3.1'
    spec.dependency 'MBProgressHUD', '~> 0.8'
    spec.dependency 'CardIO', '~> 5.4'
    spec.dependency 'Stripe', '~> 9.0'
    spec.dependency 'SnapKit', '~> 3.2.0'
    spec.dependency 'PhoneNumberKit', '~> 1.2'
end

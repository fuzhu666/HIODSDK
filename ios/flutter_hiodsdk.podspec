Pod::Spec.new do |s|
  s.name             = 'flutter_hiodsdk'
  s.version          = '0.0.0'
  s.summary          = 'flutter version of HIODSDK.'
  s.description      = <<-DESC
flutter version of HIODSDK.
                       DESC
  s.homepage         = 'https://github.com/fuzhu666'
  s.license          = { :file => '../LICENSE' }
  s.author           = { 'fuzhu' => 'fuzhu177@gmail.com' }
  s.source           = { :path => '.' }
  s.source_files = 'Classes/**/*'
  s.public_header_files = 'Classes/**/*.h'
  s.dependency 'Flutter'
  s.platform = :ios, '13.0'
  s.vendored_frameworks = 'Framework/*'
  s.pod_target_xcconfig = {
    'DEFINES_MODULE' => 'YES',
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'i386'
  }
  s.swift_version = '5.0'
  s.static_framework = true
  s.dependency 'GGOpenSDK', '~> 1.4.0'
  s.dependency 'Google-Mobile-Ads-SDK', '~> 11.10.0'
  s.dependency 'AppsFlyerFramework', '~> 6.15.3'
  s.dependency 'FBSDKCoreKit', '~> 17.4'
  s.dependency 'AppLovinSDK', '~> 13.0.0'
  
  s.dependency 'AppLovinMediationVungleAdapter', '~> 7.4.1.1' # vungle
  s.dependency 'AppLovinMediationUnityAdsAdapter', '~> 4.12.3.0' # unityads
  s.dependency 'AppLovinMediationIronSourceAdapter', '~> 8.3.0.0.1' # ironSource
  s.dependency 'AppLovinMediationMintegralAdapter', '~> 7.7.2.0.1' # mintegral
  s.dependency 'AppLovinMediationByteDanceAdapter', '~> 6.2.0.7.2' # pangle
  s.dependency 'AppLovinMediationBigoAdsAdapter', '~> 4.5.1.0' # bigo

  
  # pod 'AppLovinMediationVungleAdapter','7.4.1.1'
  # pod 'AppLovinMediationUnityAdsAdapter','4.12.3.0'
  # pod 'AppLovinMediationIronSourceAdapter','8.3.0.0.1'
  # pod 'AppLovinMediationMintegralAdapter','7.7.2.0.1'
  # pod 'AppLovinMediationByteDanceAdapter','6.2.0.7.2'
  # pod 'AppLovinMediationBigoAdsAdapter','4.5.1.0'

end
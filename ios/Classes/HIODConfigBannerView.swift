import Flutter
import Foundation
import GoogleMobileAds
import HIODSDK;
import AppLovinSDK

// 组件构造
class HIODConfigBannerView: NSObject, FlutterPlatformView {
  let frame: CGRect;
  let viewId: Int64;
  let params: NSDictionary?;
  var messenger: FlutterBinaryMessenger!
  
  init(_ frame: CGRect, viewID: Int64, args :Any?, binaryMessenger: FlutterBinaryMessenger) {
    self.frame = frame;
    self.viewId = viewID;
    self.messenger = binaryMessenger;
    self.params = args as? NSDictionary
  }
  

  func view() -> UIView {
    let mHeight = params?.value(forKey: "height") as? Double
    let mWidth = params?.value(forKey: "width") as? Double
    let mBannerView = UIView(frame: CGRect(x: 0, y: 0, width: mWidth ?? 350, height: mHeight ?? 50))
    let adView = MAAdView(adUnitIdentifier: HIODConfig.getInstance().bannerUnitId)
    adView.setLocalExtraParameterForKey("adaptive_banner_type", value: "inline")
    adView.backgroundColor = .clear
    adView.frame = CGRect(x: 0, y: 0, width: mWidth ?? 350, height: mHeight ?? 50)
    mBannerView.addSubview(adView)
    adView.loadAd()
    return mBannerView
  }
}

// 组件工厂
class HIODConfigBannerViewFactory : NSObject,FlutterPlatformViewFactory{
  var messenger: FlutterBinaryMessenger!
  
  func create(withFrame frame: CGRect, viewIdentifier viewId: Int64, arguments args: Any?) -> FlutterPlatformView {
    return HIODConfigBannerView(frame,viewID : viewId , args : args,binaryMessenger:messenger);
  }
  
  func createArgsCodec() -> FlutterMessageCodec & NSObjectProtocol
  {
      return FlutterStandardMessageCodec.sharedInstance()
  }
  
  @objc public init(messenger: (NSObject & FlutterBinaryMessenger)?) {
    super.init()
    self.messenger = messenger
  }
}

// 注册组件
class HIODConfigBannerViewPlugin {
  static func registerWith(registry:FlutterPluginRegistry) {
    let pluginKey = "HIODConfig_Banner_View";
    if (registry.hasPlugin(pluginKey)) {return};
    let registrar = registry.registrar(forPlugin: pluginKey);
    let messenger = registrar!.messenger() as! (NSObject & FlutterBinaryMessenger)
    registrar!.register(HIODConfigBannerViewFactory(messenger: messenger),withId: "HIODConfigBannerView");
  }
  
  static func registerWithPlugin(registrar: FlutterPluginRegistrar) {
    let messenger = registrar.messenger() as! (NSObject & FlutterBinaryMessenger)
    registrar.register(HIODConfigBannerViewFactory(messenger: messenger),withId: "HIODConfigBannerView");
  }
}

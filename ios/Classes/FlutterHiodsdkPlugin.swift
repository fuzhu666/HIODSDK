import Flutter
import UIKit
import HIODSDK

public class FlutterHiodsdkPlugin: NSObject, FlutterPlugin {
  public static var _channel: FlutterMethodChannel?;
  
  public static func register(with registrar: FlutterPluginRegistrar) {
    let channel = FlutterMethodChannel(name: "flutter_hiodsdk", binaryMessenger: registrar.messenger())
    let instance = FlutterHiodsdkPlugin()
    registrar.addMethodCallDelegate(instance, channel: channel)
    HIODConfigBannerViewPlugin.registerWithPlugin(registrar: registrar)
    _channel = channel;
  }	

  public func handle(_ call: FlutterMethodCall, result: @escaping FlutterResult) {
    self.callback(call: call, result: result, channel: FlutterHiodsdkPlugin._channel!)
  }
  
  func callback(
    call: FlutterMethodCall,
    result: @escaping FlutterResult,
    channel: FlutterMethodChannel
  ) {
    if (call.method == "initSDK") {
      Task { result(await initSDK(view: getCurrentController()!, args: call.arguments)) }
    }
    if (call.method == "showOpenAd") {
      showOpenAd(channel: channel, args: call.arguments)
      result(nil)
    }
    if (call.method == "showInsAd") {
      showInsAd(channel: channel, args: call.arguments)
      result(nil)
    }
    if (call.method == "showRewardVideo") {
      showRewardVideo(channel: channel, args: call.arguments)
      result(nil)
    }
    if (call.method == "logEvent") {
      let mArgs = call.arguments as! [String : String]
      logEvent(name: mArgs["name"]!, args: mArgs)
      result(nil)
    }
  }
}

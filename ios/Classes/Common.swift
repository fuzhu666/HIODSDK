import Flutter
/**
 获取当前页面的ViewController
 */
func getCurrentController() -> UIViewController? {
  let delegate  = UIApplication.shared.delegate as? FlutterAppDelegate

  var current = delegate?.window.rootViewController
  
  while (current?.presentedViewController != nil)  {
    current = current?.presentedViewController
  }
  
  if let tabbar = current as? UITabBarController , tabbar.selectedViewController != nil {
    current = tabbar.selectedViewController
  }
  
  while let navi = current as? UINavigationController , navi.topViewController != nil  {
    current = navi.topViewController
  }
  return current
}

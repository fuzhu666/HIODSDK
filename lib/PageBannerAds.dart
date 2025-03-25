/*
 * @Author: mazeyu mazeyu@zhizh.com
 * @Date: 2024-12-12 10:29:36
 * @LastEditors: mazeyu mazeyu@zhizh.com
 * @LastEditTime: 2024-12-20 18:01:28
 * @FilePath: /hy-tools-ai-name-library/lib/components/PageBannerAds.dart
 * @Description: 
 * 
 */
import 'dart:io';

import 'package:flutter/foundation.dart';
import 'package:flutter/gestures.dart';
import 'package:flutter/material.dart';
import 'package:flutter/services.dart';
import 'package:flutter_screenutil/flutter_screenutil.dart';

/// 轮播图样式的广告
class PagebannerAds extends StatefulWidget {
  final BorderRadiusGeometry radius;
  final double? width;
  final double? height;

  /// 轮播图样式的广告
  const PagebannerAds({
    super.key,
    this.width,
    this.height,
    this.radius = BorderRadius.zero
  });

  @override
  State<StatefulWidget> createState() => _PagebannerAds();
}

class _PagebannerAds extends State<PagebannerAds> {
  final mSize = <Factory<OneSequenceGestureRecognizer>>{
    Factory<OneSequenceGestureRecognizer>(
      () => EagerGestureRecognizer(),
    ),
  };

  @override
  Widget build(BuildContext context) {
    final mWidth = widget.width ?? (1.sw - 40.w);
    final mHeight = widget.height ?? 120.h;


    return Align(
      alignment: Alignment.center,
      child: Container(
        height: mHeight,
        width: mWidth,
        child: getBanner(width: mWidth, height: mHeight)
      ));
  }

  Widget getBanner({
    required double height,
    required double width
  }) {
    Widget banner = const SizedBox();
    dynamic params = {
      'height': height,
      'width': width
    };
    if (Platform.isIOS) {
      banner = UiKitView(viewType: "HIODConfigBannerView", creationParams: params, creationParamsCodec: const StandardMessageCodec(),);
    }

    if(Platform.isAndroid) {
      banner = AndroidView(viewType: "HIODConfigBannerView", creationParams: params, creationParamsCodec: const StandardMessageCodec(),);
    }
    
    return banner;
  }
}

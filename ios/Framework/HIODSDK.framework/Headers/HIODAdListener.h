//
//  HIODAdListener.h
//  HIODSDKDemo
//
//  Created by zhijieli on 2024/9/2.
//

#ifndef HIODAdListener_h
#define HIODAdListener_h


#import <Foundation/Foundation.h>

#endif /* HIODAdListener_h */
// 广告成功展示
typedef void (^DidShowBlock)(NSString * _Nullable adUnitId);

// 广告展示失败
typedef void (^DidFailBlock)(NSString * _Nullable adUnitId);

// 广告隐藏
typedef void (^DidHideBlock)(NSString * _Nullable adUnitId);

// 激励视频播放完成可奖励用户
typedef void (^DidRewardBlock)(NSString * _Nullable adUnitId);

// 广告被点击
typedef void (^DidClickBlock)(NSString * _Nullable adUnitId);

// 退出 (Only Android)
typedef void (^DidExitBlock)(NSString * _Nullable adUnitId);

// 拿到激励视频
typedef void (^DidReceiveBlock)(NSString * _Nullable adUnitId);
@interface HIODAdListener : NSObject

@end

//
//  HIODTAPManager.h
//  HIODSDK
//
//  Created by zhijieli on 2024/9/10.
//

#import <Foundation/Foundation.h>
#import <HIODSDK/HIODTAPInfoResponseBean.h>


NS_ASSUME_NONNULL_BEGIN
typedef void (^PurchaseSuccessCallback)(NSString * productID);
typedef void (^PurchaseRequestCallback)(BOOL isRequestStarted);
typedef void (^PurchaseBackCallback)(NSNumber * status);
@interface HIODTAPManager : NSObject
// 单例
+ (instancetype)sharedInstance;
/// <summary>
/// 初始化
/// </summary>
/// <param name="redirect">拉起app的协议</param>
/// <param name="isStartPolling">是否启用轮询</param>
- (void)initWithRedirect:(NSString *)redirect isStartPolling:(BOOL)isStartPolling;
/// <summary>
/// 通过该接口发起支付请求
/// </summary>
/// <param name="price">价格</param>
/// <param name="ProductID">商品ID(每类商品唯一)</param>
- (void)requestLinkWithPrice:(double)price productID:(NSString *)productID;
/// 通过该接口查询所有订单
- (void)requestAllOrderListsWithCallback:(void (^)(NSArray<HIODTAPInfoResponseBean *> *  _Nullable tAPInfoResponseBeans))callback;
/// 购买成功事件(商品ID)
@property (nonatomic, strong) PurchaseSuccessCallback onPurchaseSuccessEvent;
/// 购买请求(true:请求开始 false:请求结束)
@property (nonatomic, strong) PurchaseRequestCallback onPurchaseRequestEvent;
/// 购买请求返回事件
@property (nonatomic, strong) PurchaseBackCallback onPurchaseBackEvent;
@end


NS_ASSUME_NONNULL_END

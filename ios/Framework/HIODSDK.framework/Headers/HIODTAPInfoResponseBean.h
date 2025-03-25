//
//  TAPInfoResponsesBean.h
//  HIODSDK
//
//  Created by zhijieli on 2024/9/10.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN


/// 订单信息
@interface HIODTAPInfoResponseBean : NSObject

/// 金额
@property (nonatomic, copy) NSString *amount;
/// 商品ID
@property (nonatomic, copy) NSString *skuId;
/// 服务器订单ID
@property (nonatomic, copy) NSString *orderId;
/// 前端订单ID
@property (nonatomic, copy) NSString *goodsId;
/// 货币符号
@property (nonatomic, copy) NSString *currency;
/// 订单状态，0:待支付、1:支付成功、2:支付失败
@property (nonatomic, strong) NSNumber * status;

/// 构造函数
- (instancetype)initWithDict:(NSDictionary *)dict;

/// 将对象转换为字典
- (NSDictionary *)toDict;

/// 将对象转换为JSON字符串
- (NSString *)toJson;

@end


NS_ASSUME_NONNULL_END

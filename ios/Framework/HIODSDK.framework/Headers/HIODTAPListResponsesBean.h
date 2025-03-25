//
//  HIODTAPListResponsesBean.h
//  HIODSDK
//
//  Created by zhijieli on 2024/9/10.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
/// 订单信息
@interface HIODTAPListResponsesBean : NSObject


/// 订单列表
@property (nonatomic, strong) NSArray *orderList;

/// 构造函数
- (instancetype)initWithDict:(NSDictionary *)dict;

/// 将对象转换为字典
- (NSDictionary *)toDict;

/// 将对象转换为JSON字符串
- (NSString *)toJson;

@end

NS_ASSUME_NONNULL_END

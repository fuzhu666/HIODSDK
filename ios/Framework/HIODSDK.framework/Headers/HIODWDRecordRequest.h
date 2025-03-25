//
//  HIODWDRecordRequest.h
//  HIODSDK
//
//  Created by zhijieli on 2024/9/9.
//
#import <HIODSDK/HIODBaseRequestBean.h>

NS_ASSUME_NONNULL_BEGIN

@interface HIODWDRecordRequest : HIODBaseRequestBean
@property (nonatomic, assign) NSInteger zichanleixing;
@property (nonatomic, assign) NSInteger tixianleixing;
- (NSDictionary *)toDictionary;
- (NSString *)toJson;

@end
NS_ASSUME_NONNULL_END

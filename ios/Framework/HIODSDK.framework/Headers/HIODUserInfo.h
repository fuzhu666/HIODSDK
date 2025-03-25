#import <Foundation/Foundation.h>

@interface HIODUserInfo : NSObject <NSCoding>

@property (nonatomic, strong) NSString *uk; // 用户ID
@property (nonatomic, assign) int activeDays; // 活跃天数
@property (nonatomic, assign) int registerDays; // 注册天数
@property (nonatomic, assign) double serverTimeStamp; // 服务器时间戳
@property (nonatomic, strong) NSString *now; // 服务器时间
@property (nonatomic, strong) NSString *country; // 国家
@property (nonatomic, assign) double createTimeStamp; // 注册时间
@property (nonatomic, strong) NSString *inviteCode; // 邀邀请码
@property (nonatomic, strong) NSString *channel; // 渠道信息

- (instancetype)init;
- (NSDictionary *)toDictionary;

- (NSString *)toJSONString;
@end

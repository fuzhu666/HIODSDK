//
//  HIODArkData.h
//  HIODSDK
//
//  Created by zhijieli on 2024/9/7.
//
#import <HIODSDK/HIODArkKeyValue.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HIODArkData : NSObject

@property (nonatomic, strong) NSString *vid;
@property (nonatomic, strong) NSString *biz;
@property (nonatomic, strong) NSArray<HIODArkKeyValue *> *fields;


- (NSDictionary *)toDict;
- (NSString *)toJson;
- (instancetype)initWithDict:(NSDictionary *)dict;
@end
NS_ASSUME_NONNULL_END

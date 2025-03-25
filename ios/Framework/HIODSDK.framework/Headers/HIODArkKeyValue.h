//
//  HIODArkKeyValue.h
//  HIODSDK
//
//  Created by zhijieli on 2024/9/7.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HIODArkKeyValue : NSObject

@property (nonatomic, strong) NSString *fkey;
@property (nonatomic, strong) NSString *fvalue;


- (NSDictionary *)toDict;
- (NSString *)toJson;
- (instancetype)initWithDict:(NSDictionary *)dict;
@end


NS_ASSUME_NONNULL_END

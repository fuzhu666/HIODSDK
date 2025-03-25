//
//  HIODBalances.h
//  HIODSDK
//
//  Created by zhijieli on 2024/9/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HIODBalances : NSObject
@property (nonatomic, copy) NSString *identifier; // id
@property (nonatomic, assign) NSInteger zichanleixing;
@property (nonatomic, copy) NSString *currency;
@property (nonatomic, assign) double total;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
- (NSDictionary *)toDictionary;

@end

NS_ASSUME_NONNULL_END

//
//  HIODWDRequestResponse.h
//  HIODSDK
//
//  Created by zhijieli on 2024/9/9.
//

#import <Foundation/Foundation.h>
#import <HIODSDK/HIODWDRequestData.h>
NS_ASSUME_NONNULL_BEGIN

@interface HIODWDRequestResponse : NSObject

@property (nonatomic, strong) HIODWDRequestData *data;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
- (NSDictionary *)toDictionary;

@end

NS_ASSUME_NONNULL_END

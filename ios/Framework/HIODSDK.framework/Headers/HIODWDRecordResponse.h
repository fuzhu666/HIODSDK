//
//  HIODWDRequestData.h
//  HIODSDK
//
//  Created by zhijieli on 2024/9/9.
//

#import <Foundation/Foundation.h>
#import <HIODSDK/HIODWDRecordData.h>
NS_ASSUME_NONNULL_BEGIN


@interface HIODWDRecordResponse : NSObject

@property (nonatomic, strong) HIODWDRecordData *data;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
- (NSDictionary *)toDictionary;
@end

NS_ASSUME_NONNULL_END

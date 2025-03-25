//
//  HIODWDRecordData.h
//  HIODSDK
//
//  Created by zhijieli on 2024/9/9.
//

#import <Foundation/Foundation.h>
#import <HIODSDK/HIODWDRecordItemData.h>
#import <HIODSDK/HIODBalances.h>
#import <HIODSDK/HIODWDRecordData.h>
NS_ASSUME_NONNULL_BEGIN


@interface HIODWDRecordData : NSObject

@property (nonatomic, assign) float total;
@property (nonatomic, strong) NSArray<HIODWDRecordItemData *> *list;
@property (nonatomic, strong) NSArray<HIODBalances *> *zhanghuyue;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
- (NSDictionary *)toDictionary;
@end

NS_ASSUME_NONNULL_END

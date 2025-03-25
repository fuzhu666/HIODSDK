//
//  HIODWDRecordItemData.h
//  HIODSDK
//
//  Created by zhijieli on 2024/9/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HIODWDRecordItemData : NSObject
@property (nonatomic, copy) NSString *identifier; // id
@property (nonatomic, assign) NSInteger zichanleixing;
@property (nonatomic, copy) NSString *zhifufangshi;
@property (nonatomic, assign) float total;
@property (nonatomic, assign) NSInteger status;
@property (nonatomic, copy) NSString *tixianshijian;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
- (NSDictionary *)toDictionary;
@end

NS_ASSUME_NONNULL_END

//
//  HIODWDRequestData.h
//  HIODSDK
//
//  Created by zhijieli on 2024/9/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HIODWDRequestData : NSObject
@property (nonatomic, copy) NSString *costAssetType;
@property (nonatomic, copy) NSString *symbol;
@property (nonatomic, assign) double amount;
@property (nonatomic, assign) double fee;
@property (nonatomic, assign) NSInteger bilIStatus;
@property (nonatomic, assign) double costAmount;
@property (nonatomic, copy) NSString *paymentTypeCode;
@property (nonatomic, copy) NSString *identifier; // id
@property (nonatomic, copy) NSString *paymentAccount;
@property (nonatomic, copy) NSString *paymentName;
@property (nonatomic, copy) NSString *assetType;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary;
- (NSDictionary *)toDictionary;
@end

NS_ASSUME_NONNULL_END

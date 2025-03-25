//
//  HIODFileLog.h
//  HIODSDK
//
//  Created by zhijieli on 2024/9/6.
//

#import <Foundation/Foundation.h>

#import <Foundation/Foundation.h>

@interface HIODFileLog : NSObject
+ (void)logMessage:(NSString *)message withTag:(NSString *)tag;
+ (void)logError:(NSError *)error withTag:(NSString *)tag;
+ (void)logException:(NSException *)exception withTag:(NSString *)tag;
@end


//
//  HIODConfig.h
//  DDTSDK
//
//  Created by zhijieli on 2024/8/22.
//
#import <Foundation/Foundation.h>
extern NSString* const SDKVersionName;
extern NSString* const SDKVersionCode;

@interface HIODConfig : NSObject

@property (nonatomic, strong, readonly) NSString *appKey;
@property (nonatomic, strong, readonly) NSString *appSecret;
@property (nonatomic, strong, readonly) NSString *umkAppId;
@property (nonatomic, strong, readonly) NSString *afDevKey;
@property (nonatomic, strong, readonly) NSString *iosAppId;
@property (nonatomic, strong, readonly) NSString *oneLinkID;
@property (nonatomic, strong, readonly) NSString *serverUrl;
@property (nonatomic, strong, readonly) NSString *statUrl;
//@property (nonatomic, strong, readonly) NSString *maxAppKey;
@property (nonatomic, strong, readonly) NSString *videoUnitId;
@property (nonatomic, strong, readonly) NSString *insUnitId;
@property (nonatomic, strong, readonly) NSString *bannerUnitId;
@property (nonatomic, strong, readonly) NSString *bannerInlineUnitId;
@property (nonatomic, strong, readonly) NSString *bannerCollapsibleUnitId;
@property (nonatomic, strong, readonly) NSString *nativeUnitId;
@property (nonatomic, strong, readonly) NSString *smallNativeUnitId;
@property (nonatomic, strong, readonly) NSString *openUnitId;
@property (nonatomic, assign, readonly, getter=isPrintLog) BOOL printLog;
@property (nonatomic, assign, readonly, getter=isDebug) BOOL debug;

+ (instancetype)getInstance;

- (NSString *)toJson;
- (BOOL)initByJson:(NSString *)json;

-(void)setAppKey:(NSString *)appKey;
-(void)setAppSecret:(NSString *)appSecret;
-(void)setUmkAppId:(NSString *)umkAppId;
-(void)setAfDevKey:(NSString *)afDevKey;
-(void)setIosAppId:(NSString *)iosAppId;
-(void)setOneLinkID:(NSString *)oneLinkID;
-(void)setServerUrl:(NSString *)serverUrl;
-(void)setStatUrl:(NSString *)statUrl;
//-(void)setMaxAppKey:(NSString *)maxAppKey;
-(void)setVideoUnitId:(NSString *)videoUnitId;
-(void)setInsUnitId:(NSString *)insUnitId;
-(void)setBannerUnitId:(NSString *)bannerUnitId;
-(void)setBannerInlineUnitId:(NSString *)bannerInlineUnitId;
-(void)setBannerCollapsibleUnitId:(NSString *)bannerCollapsibleUnitId;
-(void)setNativeUnitId:(NSString *)nativeUnitId;
-(void)setSmallNativeUnitId:(NSString *)nativeUnitId;
-(void)setOpenUnitId:(NSString *)openUnitId;
-(void)setPrintLog:(BOOL)printLog;
-(void)setDebug:(BOOL)debug;


@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface ATXAppPredictorAssetMapping : NSObject
{
    NSDictionary *_consumerSubTypeAssetMappings;
}

+ (id)getFullCachePathWithBaseCachePath:(id)arg1 cacheFileBaseName:(id)arg2 subScoreName:(id)arg3;
+ (id)sharedInstanceWithMobileAssets;
+ (id)initWithCachedAssets;
- (void).cxx_destruct;
- (id)getAtxToolDescription;
- (id)getFullCachePathWithBaseCachePath:(id)arg1 consumerSubType:(unsigned char)arg2;
- (id)getFullDefaultCachePathWithConsumerSubType:(unsigned char)arg1;
- (id)getAssetFileAndSubscoreForConsumerSubType:(unsigned char)arg1;
- (id)initWithUseMobileAssets:(_Bool)arg1;
- (id)init;

@end


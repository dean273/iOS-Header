//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FRAdUtilities : NSObject
{
}

+ (id)unloadedAdProxyFromBanner:(id)arg1;
+ (int)ADCreativeTypeForNFLAdType:(long long)arg1;
+ (struct CGSize)FRAdSizeForType:(long long)arg1 portrait:(_Bool)arg2;
+ (struct CGSize)FRAdSizePortraitForType:(long long)arg1;
+ (struct CGSize)FRAdSizeLandscapeForType:(long long)arg1;
+ (id)stringForNFLAdType:(long long)arg1;
+ (long long)NFLAdTypeForString:(id)arg1;
+ (long long)NFLAdTypeForAdSpaceDescription:(id)arg1;
+ (struct CGSize)boundsSizeForType:(long long)arg1;

@end


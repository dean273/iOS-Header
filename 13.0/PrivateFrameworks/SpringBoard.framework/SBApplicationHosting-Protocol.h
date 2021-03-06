//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSArray, SBDeviceApplicationSceneHandle;

@protocol SBApplicationHosting <NSObject>
- (void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1;
- (NSArray *)hostedAppSceneHandles;
- (SBDeviceApplicationSceneHandle *)hostedAppSceneHandle;
- (_Bool)isHostingAnApp;
- (_Bool)canHostAnApp;
@end


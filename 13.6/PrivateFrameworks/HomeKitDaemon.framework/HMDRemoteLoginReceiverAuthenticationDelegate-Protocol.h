//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDRemoteLoginAuthentication, HMDRemoteLoginAuthenticationResponse;

@protocol HMDRemoteLoginReceiverAuthenticationDelegate <NSObject>
- (void)didCompleteAuthentication:(HMDRemoteLoginAuthentication *)arg1 response:(HMDRemoteLoginAuthenticationResponse *)arg2;
@end


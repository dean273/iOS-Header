//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IdleTimerServices/NSObject-Protocol.h>

@class NSString;

@protocol ITIdleTimerStateRequestDelegate <NSObject>
- (void)resendIdleTimerAssertions;
- (_Bool)handleIdleEvent:(unsigned long long)arg1 usingConfigurationWithIdentifier:(NSString *)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKitUI/NSObject-Protocol.h>

@class NSString, WFPinboardLoginViewController;

@protocol WFPinboardLoginViewControllerDelegate <NSObject>

@optional
- (void)pinboardLoginViewControllerDidCancel:(WFPinboardLoginViewController *)arg1;
- (void)pinboardLoginViewController:(WFPinboardLoginViewController *)arg1 loggedInWithUsername:(NSString *)arg2 password:(NSString *)arg3;
- (void)pinboardLoginViewController:(WFPinboardLoginViewController *)arg1 loggedInWithApiToken:(NSString *)arg2;
@end


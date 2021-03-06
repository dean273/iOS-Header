//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CarPlay/CPDashboardClientInterface-Protocol.h>

@class NSArray, NSString, NSXPCConnection;
@protocol CPDashboardProviding;

@interface CPDashboardController : NSObject <CPDashboardClientInterface>
{
    NSArray *_shortcutButtons;
    NSXPCConnection *_connection;
    id <CPDashboardProviding> _dashboardProvider;
}

+ (id)_dashboardClientInterface;
+ (id)_dashboardProvidingInterface;
- (void).cxx_destruct;
@property(retain, nonatomic) id <CPDashboardProviding> dashboardProvider; // @synthesize dashboardProvider=_dashboardProvider;
@property(retain, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;
@property(copy, nonatomic) NSArray *shortcutButtons; // @synthesize shortcutButtons=_shortcutButtons;
- (void)handleActionForControlIdentifier:(id)arg1;
- (void)_invalidate;
- (void)_connectionInterrupted;
- (void)_connectionInvalidated;
- (void)_connectToListenerEndpoint:(id)arg1;
- (void)_sceneConnect:(id)arg1;
- (id)_init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


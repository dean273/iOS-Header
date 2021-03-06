//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/_GEONetworkDefaultsServerProxyDelegate-Protocol.h>

@class NSDictionary, NSMutableArray, NSString;
@protocol OS_dispatch_queue, _GEONetworkDefaultsServerProxy;

@interface GEONetworkDefaults : NSObject <_GEONetworkDefaultsServerProxyDelegate>
{
    id <_GEONetworkDefaultsServerProxy> _serverProxy;
    NSMutableArray *_completionHandlers;
    NSDictionary *_networkDefaults;
    NSObject<OS_dispatch_queue> *_networkDefaultsIsolation;
}

+ (id)sharedNetworkDefaults;
+ (void)_ib_disableServerConnection;
+ (_Bool)useLocalProxy;
+ (void)setUseLocalProxy:(_Bool)arg1;
- (void).cxx_destruct;
- (void)serverProxy:(id)arg1 networkDefaultsDidChange:(id)arg2;
- (id)allKeys;
- (id)valueForKey:(id)arg1;
- (_Bool)_needsUpdate;
- (void)updateNetworkDefaults:(CDUnknownBlockType)arg1;
- (void)updateIfNecessary:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


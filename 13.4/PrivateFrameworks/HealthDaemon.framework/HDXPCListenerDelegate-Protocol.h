//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDXPCClient, HDXPCListener;
@protocol _HKXPCExportable;

@protocol HDXPCListenerDelegate <NSObject>
- (id <_HKXPCExportable>)exportObjectForListener:(HDXPCListener *)arg1 client:(HDXPCClient *)arg2 error:(id *)arg3;

@optional
- (void)connectionConfiguredForListener:(HDXPCListener *)arg1 client:(HDXPCClient *)arg2 exportedObject:(id <_HKXPCExportable>)arg3;
@end


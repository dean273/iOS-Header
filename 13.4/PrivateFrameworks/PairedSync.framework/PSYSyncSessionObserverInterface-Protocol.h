//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PairedSync/NSObject-Protocol.h>

@class PSYSyncSession;

@protocol PSYSyncSessionObserverInterface <NSObject>
- (oneway void)invalidateSyncSession:(PSYSyncSession *)arg1;
- (oneway void)updateSyncSession:(PSYSyncSession *)arg1;
- (oneway void)syncSessionWillStart:(PSYSyncSession *)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCCKDatabaseStartUpMiddleware-Protocol.h>

@class NSString;
@protocol FCCKDatabaseMigrator;

@interface FCCKDatabaseEncryptionStartUpMiddleware : NSObject <FCCKDatabaseStartUpMiddleware>
{
    id <FCCKDatabaseMigrator> _encryptionMigrator;
}

+ (id)secureSentinelRecordID;
+ (id)sentinelRecordID;
- (void).cxx_destruct;
@property(retain, nonatomic) id <FCCKDatabaseMigrator> encryptionMigrator; // @synthesize encryptionMigrator=_encryptionMigrator;
- (void)_associateChildOperation:(id)arg1;
- (void)_handleIdentityLossWithDatabase:(id)arg1 sentinel:(id)arg2 secureSentinel:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)_shouldHandleIdentityLossWithSentinel:(id)arg1 secureSentinel:(id)arg2 error:(id)arg3;
- (_Bool)_shouldFailGracefullyWithSentinel:(id)arg1 secureSentinel:(id)arg2 error:(id)arg3;
- (void)_createSentinelsIfNeededForDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_fetchSentinelsWithDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_adoptSentinel:(id)arg1 secureSentinel:(id)arg2 forDatabase:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_deleteOldDataWithSentinel:(id)arg1 secureSentinel:(id)arg2 database:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_deleteOldDataIfDesiredWithSentinel:(id)arg1 secureSentinel:(id)arg2 database:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_migrateWithSentinel:(id)arg1 secureSentinel:(id)arg2 database:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_tryToEnableEncryptionForDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performStartUpForDatabase:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithEncryptionMigrator:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDAuthorizationSyncEntity.h>

@interface HDAuthorizationBackupSyncEntity : HDAuthorizationSyncEntity
{
}

+ (_Bool)supportsSyncStore:(id)arg1;
+ (id)excludedSyncStoresForSession:(id)arg1;
+ (long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id *)arg4;
+ (void)didGenerateCodableSourceAuthorizationsForSyncSession:(id)arg1;
+ (_Bool)generateSyncObjectsForSession:(id)arg1 syncAnchorRange:(struct HDSyncAnchorRange)arg2 profile:(id)arg3 messageHandler:(id)arg4 error:(id *)arg5;
+ (id)syncEntityIdentifier;
+ (id)backupInfoUserDefaultsKey;
+ (void)_setBackupInfo:(id)arg1;
+ (id)_backupInfoWithSyncStore:(id)arg1;
+ (void)resetAuthorizationBackupIdentifiers;
+ (id)authorizationBackupPushIdentifierWithSyncStore:(id)arg1;
+ (id)authorizationBackupPullIdentifierWithSyncStore:(id)arg1;
+ (void)setAuthorizationBackupPushIdentifier:(id)arg1 syncStore:(id)arg2;
+ (id)createCodableSourceAuthorizationWithSource:(id)arg1 syncSession:(id)arg2;

@end


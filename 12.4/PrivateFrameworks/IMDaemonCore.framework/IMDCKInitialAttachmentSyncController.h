//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMDaemonCore/IMDCKAttachmentSyncController.h>

@class CKServerChangeToken;

@interface IMDCKInitialAttachmentSyncController : IMDCKAttachmentSyncController
{
    CKServerChangeToken *_syncToken;
}

@property(retain, nonatomic) CKServerChangeToken *syncToken; // @synthesize syncToken=_syncToken;
- (id)ckUtilities;
- (_Bool)_kickOffWriteIfNeededForSyncType:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_deviceConditionsAllowsMessageSyncIgnoreFeatureEnabled:(_Bool)arg1;
- (_Bool)_deviceConditionsAllowsMessageSync;
- (_Bool)_deviceConditionsAllowsMessageSyncForCurrentBatchCount:(long long)arg1 maxBatchCount:(long long)arg2;
- (id)latestSyncToken;
- (void)setLatestSyncToken:(id)arg1;
- (void)dealloc;

@end


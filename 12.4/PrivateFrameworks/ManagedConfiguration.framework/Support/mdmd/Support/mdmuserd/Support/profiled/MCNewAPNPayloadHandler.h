//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MCNewPayloadHandler.h"

@interface MCNewAPNPayloadHandler : MCNewPayloadHandler
{
}

- (void)didRemoveOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;
- (void)didInstallOldGlobalRestrictions:(id)arg1 newGlobalRestrictions:(id)arg2;
- (void)_sendNotifications;
- (void)migrateDefaults;
- (void)unsetAside;
- (void)setAside;
- (void)remove;
- (void)_remove;
- (_Bool)installWithInstaller:(id)arg1 options:(id)arg2 interactionClient:(id)arg3 outError:(id *)arg4;
- (_Bool)_install;
- (void)_notifyCoreTelephonyOfAPNChange;

@end


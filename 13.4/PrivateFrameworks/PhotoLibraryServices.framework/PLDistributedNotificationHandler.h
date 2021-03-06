//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PLPhotoLibraryBundleController;
@protocol OS_dispatch_queue;

@interface PLDistributedNotificationHandler : NSObject
{
    NSObject<OS_dispatch_queue> *_notificationQueue;
    PLPhotoLibraryBundleController *_libraryBundleController;
}

- (void).cxx_destruct;
- (void)_openSystemPhotoLibrary;
- (void)_handleCloudPhotoNotification;
- (void)_handleNotification:(id)arg1;
- (void)registerForNotifications;
- (id)initWithLibraryBundleController:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ExposureNotificationDaemon/NSObject-Protocol.h>

@class ENRegion, NSObject;
@protocol ENRegionMonitorDataSource;

@protocol ENRegionMonitorSourceDelegate <NSObject>
- (void)regionDataSource:(NSObject<ENRegionMonitorDataSource> *)arg1 updatedWithRegion:(ENRegion *)arg2;
@end


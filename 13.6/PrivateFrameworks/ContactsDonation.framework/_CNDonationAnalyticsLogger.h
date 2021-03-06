//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsDonation/CNDonationAnalyticsLogger-Protocol.h>

@class NSString;
@protocol OS_os_log;

@interface _CNDonationAnalyticsLogger : NSObject <CNDonationAnalyticsLogger>
{
    NSObject<OS_os_log> *_log_t;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_os_log> *log_t; // @synthesize log_t=_log_t;
- (void)noDonatedMeCard;
- (void)noMeCard;
- (void)withinReportingInterval:(id)arg1;
- (void)didReportAnalytics;
- (void)willReportAnalytics;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


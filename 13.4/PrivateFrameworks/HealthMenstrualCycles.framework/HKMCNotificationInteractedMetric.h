//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HKMCNotificationInteractedMetric : NSObject
{
    NSDictionary *_eventPayload;
    NSString *_category;
    NSString *_action;
}

+ (id)eventName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) NSDictionary *eventPayload; // @synthesize eventPayload=_eventPayload;
- (id)description;
- (id)initWithCategory:(id)arg1 action:(id)arg2;

@end


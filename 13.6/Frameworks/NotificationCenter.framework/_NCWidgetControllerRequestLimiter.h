//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

__attribute__((visibility("hidden")))
@interface _NCWidgetControllerRequestLimiter : NSObject
{
    NSDate *_lastRequestDate;
    _Bool _isThrottled;
    long long _requestCount;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)isRequestPermitted;

@end


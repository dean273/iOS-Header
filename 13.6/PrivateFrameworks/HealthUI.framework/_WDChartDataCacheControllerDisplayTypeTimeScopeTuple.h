//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/NSCopying-Protocol.h>

@class HKDisplayType;

@interface _WDChartDataCacheControllerDisplayTypeTimeScopeTuple : NSObject <NSCopying>
{
    HKDisplayType *_displayType;
    long long _timeScope;
}

- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDisplayType:(id)arg1 timeScope:(long long)arg2;

@end


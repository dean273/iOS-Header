//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKSampleType, NSDateInterval;

@interface HKSampleTypeChange : NSObject <NSSecureCoding>
{
    _Bool _samplesWereDeleted;
    _Bool _hasUnfrozenSeries;
    HKSampleType *_sampleType;
    double _startTime;
    double _endTime;
    long long _queryStrategy;
}

+ (_Bool)supportsSecureCoding;
+ (id)sampleTypeChangeWithSampleType:(id)arg1 dateInterval:(id)arg2 samplesWereDeleted:(_Bool)arg3 hasUnfrozenSeries:(_Bool)arg4;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long queryStrategy; // @synthesize queryStrategy=_queryStrategy;
@property(readonly, nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) _Bool hasUnfrozenSeries; // @synthesize hasUnfrozenSeries=_hasUnfrozenSeries;
@property(readonly, nonatomic) _Bool samplesWereDeleted; // @synthesize samplesWereDeleted=_samplesWereDeleted;
@property(readonly, copy, nonatomic) HKSampleType *sampleType; // @synthesize sampleType=_sampleType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)_extendDateIntervalWithSample:(id)arg1;
@property(readonly, copy, nonatomic) NSDateInterval *dateInterval;
- (id)_initWithSampleType:(id)arg1 startTime:(double)arg2 endTime:(double)arg3 deletions:(_Bool)arg4 hasUnfrozenSeries:(_Bool)arg5 queryStrategy:(long long)arg6;

@end


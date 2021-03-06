//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ExposureNotificationDaemon/NSCopying-Protocol.h>

@class NSString;

@interface ENServerConfiguration : PBCodable <NSCopying>
{
    CDStruct_95bda58d _fetchAllRanges;
    CDStruct_95bda58d _fetchIncrementalRanges;
    long long _advertisingIntervalInMilliSec;
    long long _callbackIntervalInMin;
    long long _proximityDurationMinAPWakeThresholdInSec;
    long long _proximityDurationMinForceAPWakeThresholdInSec;
    long long _proximityDurationScanDurationAudioInSec;
    long long _proximityDurationScanDurationInSec;
    long long _proximityDurationScanIntervalAudioInMilliSec;
    int _applicationBackgroundRuntimeIntervalinHours;
    int _attenuationMinThreshold;
    int _attenuationThresholdForExposureInfo;
    int _maximumFutureDayKeysToPublish;
    int _maximumPastDaysKeysToFetchOrPublish;
    int _proximityDurationMaxThresholdInSec;
    int _proximityDurationMinThresholdInSec;
    NSString *_regionIdentifier;
    int _rollingIdentifierIntervalInMin;
    int _rollingIdentifiersCacheExpiryAgeInSec;
    NSString *_serverConfigVersion;
    _Bool _enEnabled;
    struct {
        unsigned int advertisingIntervalInMilliSec:1;
        unsigned int proximityDurationMinAPWakeThresholdInSec:1;
        unsigned int proximityDurationMinForceAPWakeThresholdInSec:1;
        unsigned int proximityDurationScanDurationAudioInSec:1;
        unsigned int proximityDurationScanDurationInSec:1;
        unsigned int proximityDurationScanIntervalAudioInMilliSec:1;
        unsigned int applicationBackgroundRuntimeIntervalinHours:1;
        unsigned int attenuationMinThreshold:1;
        unsigned int attenuationThresholdForExposureInfo:1;
        unsigned int proximityDurationMaxThresholdInSec:1;
        unsigned int proximityDurationMinThresholdInSec:1;
        unsigned int rollingIdentifierIntervalInMin:1;
        unsigned int rollingIdentifiersCacheExpiryAgeInSec:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *regionIdentifier; // @synthesize regionIdentifier=_regionIdentifier;
@property(nonatomic) long long callbackIntervalInMin; // @synthesize callbackIntervalInMin=_callbackIntervalInMin;
@property(nonatomic) int maximumFutureDayKeysToPublish; // @synthesize maximumFutureDayKeysToPublish=_maximumFutureDayKeysToPublish;
@property(nonatomic) int maximumPastDaysKeysToFetchOrPublish; // @synthesize maximumPastDaysKeysToFetchOrPublish=_maximumPastDaysKeysToFetchOrPublish;
@property(nonatomic) long long advertisingIntervalInMilliSec; // @synthesize advertisingIntervalInMilliSec=_advertisingIntervalInMilliSec;
@property(nonatomic) long long proximityDurationScanIntervalAudioInMilliSec; // @synthesize proximityDurationScanIntervalAudioInMilliSec=_proximityDurationScanIntervalAudioInMilliSec;
@property(nonatomic) long long proximityDurationScanDurationAudioInSec; // @synthesize proximityDurationScanDurationAudioInSec=_proximityDurationScanDurationAudioInSec;
@property(nonatomic) long long proximityDurationScanDurationInSec; // @synthesize proximityDurationScanDurationInSec=_proximityDurationScanDurationInSec;
@property(nonatomic) long long proximityDurationMinAPWakeThresholdInSec; // @synthesize proximityDurationMinAPWakeThresholdInSec=_proximityDurationMinAPWakeThresholdInSec;
@property(nonatomic) long long proximityDurationMinForceAPWakeThresholdInSec; // @synthesize proximityDurationMinForceAPWakeThresholdInSec=_proximityDurationMinForceAPWakeThresholdInSec;
@property(retain, nonatomic) NSString *serverConfigVersion; // @synthesize serverConfigVersion=_serverConfigVersion;
@property(nonatomic) _Bool enEnabled; // @synthesize enEnabled=_enEnabled;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasAttenuationThresholdForExposureInfo;
@property(nonatomic) int attenuationThresholdForExposureInfo; // @synthesize attenuationThresholdForExposureInfo=_attenuationThresholdForExposureInfo;
@property(readonly, nonatomic) _Bool hasRegionIdentifier;
@property(nonatomic) _Bool hasApplicationBackgroundRuntimeIntervalinHours;
@property(nonatomic) int applicationBackgroundRuntimeIntervalinHours; // @synthesize applicationBackgroundRuntimeIntervalinHours=_applicationBackgroundRuntimeIntervalinHours;
@property(nonatomic) _Bool hasProximityDurationMaxThresholdInSec;
@property(nonatomic) int proximityDurationMaxThresholdInSec; // @synthesize proximityDurationMaxThresholdInSec=_proximityDurationMaxThresholdInSec;
- (void)setFetchIncrementalRanges:(int *)arg1 count:(unsigned long long)arg2;
- (int)fetchIncrementalRangeAtIndex:(unsigned long long)arg1;
- (void)addFetchIncrementalRange:(int)arg1;
- (void)clearFetchIncrementalRanges;
@property(readonly, nonatomic) int *fetchIncrementalRanges;
@property(readonly, nonatomic) unsigned long long fetchIncrementalRangesCount;
- (void)setFetchAllRanges:(int *)arg1 count:(unsigned long long)arg2;
- (int)fetchAllRangeAtIndex:(unsigned long long)arg1;
- (void)addFetchAllRange:(int)arg1;
- (void)clearFetchAllRanges;
@property(readonly, nonatomic) int *fetchAllRanges;
@property(readonly, nonatomic) unsigned long long fetchAllRangesCount;
@property(nonatomic) _Bool hasAdvertisingIntervalInMilliSec;
@property(nonatomic) _Bool hasProximityDurationScanIntervalAudioInMilliSec;
@property(nonatomic) _Bool hasProximityDurationScanDurationAudioInSec;
@property(nonatomic) _Bool hasProximityDurationScanDurationInSec;
@property(nonatomic) _Bool hasProximityDurationMinAPWakeThresholdInSec;
@property(nonatomic) _Bool hasProximityDurationMinForceAPWakeThresholdInSec;
@property(nonatomic) _Bool hasRollingIdentifiersCacheExpiryAgeInSec;
@property(nonatomic) int rollingIdentifiersCacheExpiryAgeInSec; // @synthesize rollingIdentifiersCacheExpiryAgeInSec=_rollingIdentifiersCacheExpiryAgeInSec;
@property(nonatomic) _Bool hasProximityDurationMinThresholdInSec;
@property(nonatomic) int proximityDurationMinThresholdInSec; // @synthesize proximityDurationMinThresholdInSec=_proximityDurationMinThresholdInSec;
@property(nonatomic) _Bool hasAttenuationMinThreshold;
@property(nonatomic) int attenuationMinThreshold; // @synthesize attenuationMinThreshold=_attenuationMinThreshold;
@property(nonatomic) _Bool hasRollingIdentifierIntervalInMin;
@property(nonatomic) int rollingIdentifierIntervalInMin; // @synthesize rollingIdentifierIntervalInMin=_rollingIdentifierIntervalInMin;
- (void)dealloc;

@end


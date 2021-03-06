//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioFile, NSError, NSHashTable, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface RCWaveformGenerator : NSObject
{
    long long _state;
    NSObject<OS_dispatch_semaphore> *_digestPausedSemaphore;
    NSObject<OS_dispatch_queue> *_queue;
    double _totalDigestedTime;
    double _totalFlushedTime;
    NSHashTable *_weakObservers;
    NSMutableArray *_internalFinishedLoadingBlockUUIDs;
    NSMutableArray *_internalFinishedLoadingBlocks;
    AVAudioFile *_activeAudioFile;
    struct PowerMeter _samplePowerMeter;
    _Bool _isSampleRateKnown;
    vector_7584168e _powerLevelBuffer;
    float _powerLevelBufferLastPushedValue;
    unsigned long long _powerLevelsConsumedSinceLastFlush;
    unsigned long long _framesConsumedSinceLastFlush;
    long long _framesNeededForNextDB;
    long long _framesNeededForNextFlush;
    NSError *_loadingError;
    unsigned long long _pauseCount;
    _Bool _canceled;
    double _segmentFlushInterval;
    long long _overviewUnitsPerSecond;
}

@property(nonatomic) _Bool canceled; // @synthesize canceled=_canceled;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) long long overviewUnitsPerSecond; // @synthesize overviewUnitsPerSecond=_overviewUnitsPerSecond;
@property(readonly, nonatomic) double segmentFlushInterval; // @synthesize segmentFlushInterval=_segmentFlushInterval;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_onQueue_appendPowerMeterValuesFromRawAudioData:(void *)arg1 frameCount:(long long)arg2 format:(const struct AudioStreamBasicDescription *)arg3 isPredigest:(_Bool)arg4;
- (void)_onQueue_appendSegment:(id)arg1;
- (void)_onQueue_pushAveragePowerLevel:(float)arg1;
- (void)_onQueue_digestAveragePowerLevel:(float)arg1;
- (void)_onQueue_flushRemainingData;
- (void)_onQueue_flushWithNextSegmentWithEndTime:(double)arg1 isPredigest:(_Bool)arg2;
- (void)_onQueue_flushWaveformSegment:(id)arg1;
- (_Bool)_appendAveragePowerLevelsByDigestingWaveformSegments:(id)arg1;
- (id)synchronouslyApproximateWaveformForAVContentURL:(id)arg1 byReadingCurrentFileAheadTimeRange:(CDStruct_73a5d3ca)arg2;
- (void)_onQueue_appendAveragePowerLevelsByDigestingTimeRange:(CDStruct_73a5d3ca)arg1 inAudioFile:(id)arg2;
- (void)_appendAveragePowerLevelsByDigestingTimeRange:(CDStruct_73a5d3ca)arg1 inAudioFile:(id)arg2;
- (_Bool)_appendPowerMeterValuesFromDataInAudioFile:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (void)_appendPowerMeterValuesFromAudioPCMBuffer:(id)arg1;
- (void)_appendPowerMeterValuesFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)_appendAveragePowerLevel:(float)arg1;
- (void)_onQueue_performObserversBlock:(CDUnknownBlockType)arg1;
- (void)_onQueue_performInternalFinishedLoadingBlocksAndFinishObservers;
- (void)_onQueue_performLoadingFinishedBlock:(CDUnknownBlockType)arg1 internalBlockUUID:(id)arg2 isTimeout:(_Bool)arg3;
- (void)async_finishLoadingByTerminating:(_Bool)arg1 loadingFinishedBlockTimeout:(unsigned long long)arg2 loadingFinishedBlock:(CDUnknownBlockType)arg3;
- (void)finishLoadingWithCompletionTimeout:(unsigned long long)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)terminateLoadingImmediately;
@property(nonatomic) _Bool paused;
- (void)beginLoading;
@property(readonly, nonatomic) _Bool idle;
@property(readonly, nonatomic) _Bool finished;
@property(readonly, nonatomic) _Bool loadable;
- (_Bool)appendAveragePowerLevelsByDigestingWaveform:(id)arg1;
- (_Bool)appendAveragePowerLevel:(float)arg1;
- (_Bool)appendAveragePowerLevelsByDigestingWaveformSegments:(id)arg1;
- (_Bool)appendAveragePowerLevelsByDigestingContentsOfAudioFileURL:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (_Bool)appendAveragePowerLevelsByDigestingAudioPCMBuffer:(id)arg1;
- (_Bool)appendAveragePowerLevelsByDigestingSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)flushPendingCapturedSampleBuffers;
- (void)removeSegmentOutputObserver:(id)arg1;
- (void)addSegmentOutputObserver:(id)arg1;
- (id)initWithSamplingParametersFromGenerator:(id)arg1;
- (id)initWithSegmentFlushInterval:(double)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IXSDataPromiseDelegate-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface IXSDataPromiseManager : NSObject <IXSDataPromiseDelegate>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_uuidToPromiseMap;
}

+ (id)sharedInstance;
+ (id)saveDir;
+ (id)savePathForPromise:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableDictionary *uuidToPromiseMap; // @synthesize uuidToPromiseMap=_uuidToPromiseMap;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)promise:(id)arg1 didCancelForReason:(id)arg2 client:(unsigned long long)arg3;
- (void)promise:(id)arg1 didUpdateProgress:(double)arg2;
- (void)promiseDidReset:(id)arg1;
- (void)promiseDidComplete:(id)arg1;
- (void)promiseDidBegin:(id)arg1;
- (void)clearAllPromisesForCreator:(unsigned long long)arg1;
- (void)decommissionPromise:(id)arg1;
- (void)enumeratePromises:(CDUnknownBlockType)arg1;
- (void)registerPromise:(id)arg1;
- (id)promiseForUUID:(id)arg1;
- (id)promiseForUUID:(id)arg1 ofType:(Class)arg2;
- (id)_promiseForUUID:(id)arg1 ofType:(Class)arg2 useQueue:(_Bool)arg3;
- (void)_onQueue_restoreSavedPromises;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


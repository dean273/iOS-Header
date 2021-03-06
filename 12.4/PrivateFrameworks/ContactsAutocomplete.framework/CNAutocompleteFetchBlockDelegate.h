//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteFetchDelegate-Protocol.h>

@class NSString;

@interface CNAutocompleteFetchBlockDelegate : NSObject <CNAutocompleteFetchDelegate>
{
    CDUnknownBlockType _resultHandler;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _finishHandler;
    CDUnknownBlockType _beganNetworkActivityHandler;
    CDUnknownBlockType _endedNetworkActivityHandler;
    CDUnknownBlockType _supplementalResultHandler;
    CDUnknownBlockType _adjustmentHandler;
    CDUnknownBlockType _willSortHandler;
    CDUnknownBlockType _comparatorHandler;
}

@property(copy) CDUnknownBlockType comparatorHandler; // @synthesize comparatorHandler=_comparatorHandler;
@property(copy) CDUnknownBlockType willSortHandler; // @synthesize willSortHandler=_willSortHandler;
@property(copy) CDUnknownBlockType adjustmentHandler; // @synthesize adjustmentHandler=_adjustmentHandler;
@property(copy) CDUnknownBlockType supplementalResultHandler; // @synthesize supplementalResultHandler=_supplementalResultHandler;
@property(copy) CDUnknownBlockType endedNetworkActivityHandler; // @synthesize endedNetworkActivityHandler=_endedNetworkActivityHandler;
@property(copy) CDUnknownBlockType beganNetworkActivityHandler; // @synthesize beganNetworkActivityHandler=_beganNetworkActivityHandler;
@property(copy) CDUnknownBlockType finishHandler; // @synthesize finishHandler=_finishHandler;
@property(copy) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(copy) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
- (void).cxx_destruct;
- (_Bool)respondsToSelector:(SEL)arg1;
- (CDUnknownBlockType)resultComparatorForAutocompleteFetch:(id)arg1;
- (void)autocompleteFetch:(id)arg1 willSortResults:(id)arg2;
- (id)autocompleteFetch:(id)arg1 willAdjustResults:(id)arg2;
- (_Bool)autocompleteFetch:(id)arg1 shouldExpectSupplementalResultsForRequest:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)autocompleteFetchDidEndNetworkActivity:(id)arg1;
- (void)autocompleteFetchDidBeginNetworkActivity:(id)arg1;
- (void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2;
- (void)autocompleteFetchDidFinish:(id)arg1;
- (void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


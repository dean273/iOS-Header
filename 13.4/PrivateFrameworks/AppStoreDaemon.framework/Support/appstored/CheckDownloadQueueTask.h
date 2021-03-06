//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Task.h"

@class NSArray, NSString;

@interface CheckDownloadQueueTask : Task
{
    long long _numberOfAvailableDownloads;
    long long _downloadQueueType;
    NSArray *_items;
    NSArray *_storeItems;
    NSString *_storeCorrelationID;
}

- (void).cxx_destruct;
@property(readonly) NSString *storeCorrelationID; // @synthesize storeCorrelationID=_storeCorrelationID;
@property(readonly, nonatomic) NSArray *storeItems; // @synthesize storeItems=_storeItems;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly) long long downloadQueueType; // @synthesize downloadQueueType=_downloadQueueType;
- (void)_setItems:(id)arg1;
- (void)_runPendingCancelDownloadOperations;
- (id)_metadataForStoreItems:(id)arg1;
- (id)_requestURL:(id *)arg1;
- (id)_newBaseRequestBodyDictionaryWithAccountID:(id)arg1;
- (void)main;
@property(readonly) long long numberOfAvailableDownloads; // @synthesize numberOfAvailableDownloads=_numberOfAvailableDownloads;
- (id)initWithDownloadQueueType:(long long)arg1;
- (id)init;

@end


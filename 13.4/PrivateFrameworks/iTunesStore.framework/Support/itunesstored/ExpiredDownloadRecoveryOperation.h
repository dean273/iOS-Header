//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class SSMemoryEntity;

@interface ExpiredDownloadRecoveryOperation : ISOperation
{
    SSMemoryEntity *_download;
    CDUnknownBlockType _outputBlock;
}

+ (_Bool)canAttemptRecoveryWithError:(id)arg1;
- (void).cxx_destruct;
- (void)run;
@property(copy) CDUnknownBlockType outputBlock;
- (id)initWithDownloadIdentifier:(long long)arg1 databaseSession:(id)arg2;

@end


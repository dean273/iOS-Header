//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PHAJobWorkInfoReader : NSObject
{
    NSMutableArray *_workInfosQueue;
    unsigned long long _fetchLimit;
}

@property(nonatomic) unsigned long long fetchLimit; // @synthesize fetchLimit=_fetchLimit;
- (void).cxx_destruct;
- (id)workInfoWithCount:(unsigned long long)arg1 fetchBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) unsigned long long queueCount;
- (id)init;

@end


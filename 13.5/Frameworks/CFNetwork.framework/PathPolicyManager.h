//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PathPolicyManager : NSObject
{
    NSMutableDictionary *_pathToPathId;
    long long _nextPathId;
}

- (void)dealloc;
- (void)removeAllEntries;
- (id)pathIDForPath:(id)arg1 lookup:(_Bool)arg2;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface _IKDSEPrototypeBundle : NSObject
{
    NSMutableArray *_prototypes;
    NSMutableArray *_entries;
    struct {
        _Bool areEntriesDirty;
    } _flags;
}

- (void).cxx_destruct;
- (void)addPrototype:(id)arg1 forIndexes:(id)arg2;
- (id)allPrototypes;
- (id)prototypeForItemAtIndex:(unsigned long long)arg1;
- (id)init;

@end


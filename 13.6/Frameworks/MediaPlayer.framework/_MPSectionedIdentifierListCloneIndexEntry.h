//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPSectionedIdentifierListItemEntry, NSMutableSet;

@interface _MPSectionedIdentifierListCloneIndexEntry : NSObject
{
    MPSectionedIdentifierListItemEntry *_rootEntry;
    NSMutableSet *_clonedEntries;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *clonedEntries; // @synthesize clonedEntries=_clonedEntries;
@property(retain, nonatomic) MPSectionedIdentifierListItemEntry *rootEntry; // @synthesize rootEntry=_rootEntry;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _UIStatusBarDataEntry;

__attribute__((visibility("hidden")))
@interface _UIStatusBarDataAggregatorUpdate : NSObject
{
    _Bool _animated;
    _UIStatusBarDataEntry *_entry;
}

+ (id)updateWithEntry:(id)arg1;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(retain, nonatomic) _UIStatusBarDataEntry *entry; // @synthesize entry=_entry;
- (void).cxx_destruct;

@end


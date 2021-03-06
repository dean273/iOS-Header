//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Task.h"

@class NSArray, NSPredicate;

@interface SystemAppLookupTask : Task
{
    NSPredicate *_predicate;
    NSArray *_lookupResults;
}

+ (id)lookupSystemApplicationsWithBundleIDs:(id)arg1;
+ (id)lookupSystemApplicationWithBundleID:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy) NSArray *lookupResults; // @synthesize lookupResults=_lookupResults;
- (void)main;
- (id)initWithPredicate:(id)arg1;

@end


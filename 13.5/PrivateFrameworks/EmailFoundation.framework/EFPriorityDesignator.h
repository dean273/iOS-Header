//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface EFPriorityDesignator : NSObject
{
    unsigned long long _priority;
}

+ (void)destroyCurrentDesignator;
+ (id)pushNewDesignator;
+ (id)currentDesignatorStack;
+ (id)currentDesignatorStackIfExists;
+ (id)currentDesignatorIfExists;
+ (id)installNewDesignator;
+ (id)currentDesignator;
@property(nonatomic) unsigned long long priority; // @synthesize priority=_priority;

@end


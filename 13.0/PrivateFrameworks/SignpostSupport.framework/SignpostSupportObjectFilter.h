//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SignpostSupportObjectFilter : NSObject
{
    CDUnknownBlockType _filterBlock;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType filterBlock; // @synthesize filterBlock=_filterBlock;
- (void).cxx_destruct;
- (_Bool)passesObject:(id)arg1;
- (id)initWithFilterBlock:(CDUnknownBlockType)arg1;

@end


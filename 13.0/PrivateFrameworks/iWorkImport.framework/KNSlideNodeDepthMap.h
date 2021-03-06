//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface KNSlideNodeDepthMap : NSObject
{
    NSArray *_slideNodes;
    NSArray *_depthsOfSlideNodes;
}

@property(readonly, nonatomic) NSArray *depthsOfSlideNodes; // @synthesize depthsOfSlideNodes=_depthsOfSlideNodes;
@property(readonly, nonatomic) NSArray *slideNodes; // @synthesize slideNodes=_slideNodes;
- (void).cxx_destruct;
- (void)enumerateSlideNodesAndDepthsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithSlideNodes:(id)arg1 depths:(id)arg2;

@end


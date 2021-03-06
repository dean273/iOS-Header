//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <BookCoverUtility/BCUSeriesCoverEffectsFilter-Protocol.h>

@class BCULayerRenderer, NSString;

@interface _BCUCoverEffectsSeriesStack : NSObject <BCUSeriesCoverEffectsFilter>
{
    NSString *_identifier;
    BCULayerRenderer *_renderer;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BCULayerRenderer *renderer; // @synthesize renderer=_renderer;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)_stackLayerWithImages:(id)arg1 filters:(id)arg2 size:(struct CGSize)arg3 contentsScale:(double)arg4 insets:(struct UIEdgeInsets *)arg5 path:(const struct CGPath **)arg6;
- (id)newOperationWithImages:(id)arg1 filters:(id)arg2 size:(struct CGSize)arg3 contentsScale:(double)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithIdentifier:(id)arg1 renderer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


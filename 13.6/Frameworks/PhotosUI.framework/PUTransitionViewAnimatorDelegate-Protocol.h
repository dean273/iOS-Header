//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PUTransitionViewAnimator;

@protocol PUTransitionViewAnimatorDelegate <NSObject>

@optional
- (void)transitionViewAnimatorDidEnd:(PUTransitionViewAnimator *)arg1 finished:(_Bool)arg2;
- (void)transitionViewAnimatorWillEnd:(PUTransitionViewAnimator *)arg1 withTargetTranslation:(inout struct CGPoint *)arg2;
- (void)transitionViewAnimatorDidUpdate:(PUTransitionViewAnimator *)arg1;
@end


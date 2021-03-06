//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PlatterKit/PLClickPresentationInteractionManager.h>

@protocol PLPreviewInteractionManagerDelegate;

@interface PLPreviewInteractionManager : PLClickPresentationInteractionManager
{
}

+ (void)initialize;
- (void)_delegateDeclinedDismissingPresentedContentWithTrigger:(long long)arg1;
- (void)_delegateWillDismissPresentedContentWithTrigger:(long long)arg1;
- (void)_delegateShouldFinishInteractionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_delegateDidEndUserInteraction;
- (void)_delegateWillBeginUserInteraction;
- (_Bool)_delegateShouldBeginInteractionWithTouchAtLocation:(struct CGPoint)arg1;
- (id)_delegateContainerView;
- (id)_delegateTransitioningDelegate;
- (id)_delegatePresentedViewController;
@property(nonatomic) __weak id <PLPreviewInteractionManagerDelegate> delegate; // @dynamic delegate;
- (id)initWithPresentingViewController:(id)arg1;

@end


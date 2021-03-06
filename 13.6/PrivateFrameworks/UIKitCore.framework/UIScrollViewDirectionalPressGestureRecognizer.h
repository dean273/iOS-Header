//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIRepeatingPressGestureRecognizer.h>

@class UIScrollView, UIView;

__attribute__((visibility("hidden")))
@interface UIScrollViewDirectionalPressGestureRecognizer : _UIRepeatingPressGestureRecognizer
{
    _Bool _hasBeenModified;
    UIView *_originalView;
    UIScrollView *_scrollView;
    long long _activePressType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long activePressType; // @synthesize activePressType=_activePressType;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)setAllowedTouchTypes:(id)arg1;
- (void)setAllowedPressTypes:(id)arg1;
- (void)_resetToOriginalViewIfAllowed;
- (void)_addToViewIfAllowed:(id)arg1;
- (void)_setEnabledIfAllowed:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)reset;
- (_Bool)_shouldReceivePress:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end


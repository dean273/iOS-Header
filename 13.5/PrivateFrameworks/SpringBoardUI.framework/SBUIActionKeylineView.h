//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MTVisualStylingProvider;

@interface SBUIActionKeylineView : UIView
{
    MTVisualStylingProvider *_visualStylingProvider;
    double _height;
}

- (void).cxx_destruct;
@property(nonatomic) double height; // @synthesize height=_height;
- (void)_updateCornerMask;
- (void)_updateVisualStylingIfNecessary;
- (void)_invalidateVisualStyling;
- (struct CGSize)intrinsicContentSize;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;
- (double)heightInPixels;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface CAMFocusIndicatorRectView : UIView
{
    long long _style;
    UIImageView *__imageView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIImageView *_imageView; // @synthesize _imageView=__imageView;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic, getter=isPulsing) _Bool pulsing;
@property(nonatomic, getter=isInactive) _Bool inactive;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (id)initWithStyle:(long long)arg1;

@end


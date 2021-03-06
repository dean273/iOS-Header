//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class SRTranscriptContentView, UICollectionView;
@protocol SRTranscriptViewDelegate;

@interface SRTranscriptView : UIView
{
    SRTranscriptContentView *_contentView;
    _Bool _contentSizeIsSet;
    UIView *_fullScreenEffectContainerView;
    id <SRTranscriptViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SRTranscriptViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setBottomKeylineHidden:(_Bool)arg1;
- (void)setTopKeylineHidden:(_Bool)arg1;
@property(nonatomic) double bottomMargin;
@property(nonatomic) double topMargin;
@property(retain, nonatomic) UIView *suggestionsView;
@property(readonly, nonatomic) UICollectionView *collectionView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)showFullScreenEffect:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 collectionView:(id)arg2 delegate:(id)arg3;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BackgroundColorButton.h"

@class MapsProgressBarView;

__attribute__((visibility("hidden")))
@interface MapsProgressButton : BackgroundColorButton
{
    double _progress;
    MapsProgressBarView *_progressBarView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool progressBarHidden;
@property(nonatomic) unsigned long long fillStyle;
@property(nonatomic) double progress;
- (void)_insertProgressBarViewIfNecessary;
- (void)didMoveToWindow;
- (void)_customInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end


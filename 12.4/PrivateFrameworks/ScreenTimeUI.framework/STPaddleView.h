//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UILabel;

@interface STPaddleView : UIView
{
    NSArray *_usageItems;
    UIView *_backgroundView;
    UILabel *_dayLabel;
    UILabel *_dateTimeLabel;
    UILabel *_usageLabel;
}

@property(readonly, nonatomic) UILabel *usageLabel; // @synthesize usageLabel=_usageLabel;
@property(readonly, nonatomic) UILabel *dateTimeLabel; // @synthesize dateTimeLabel=_dateTimeLabel;
@property(readonly, nonatomic) UILabel *dayLabel; // @synthesize dayLabel=_dayLabel;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) NSArray *usageItems; // @synthesize usageItems=_usageItems;
- (void).cxx_destruct;
- (void)setDataPoint:(id)arg1;
- (id)init;

@end


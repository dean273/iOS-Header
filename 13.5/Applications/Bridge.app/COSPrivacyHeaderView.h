//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "PSHeaderFooterView-Protocol.h"

@class COSPrivacyController, UILabel, UITapGestureRecognizer;

@interface COSPrivacyHeaderView : UIView <PSHeaderFooterView>
{
    COSPrivacyController *_controller;
    UITapGestureRecognizer *_recognizer;
    UILabel *_detailLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(readonly, nonatomic) UITapGestureRecognizer *recognizer; // @synthesize recognizer=_recognizer;
@property(nonatomic) __weak COSPrivacyController *controller; // @synthesize controller=_controller;
- (void)_accessibilitySetInterfaceStyleIntent:(unsigned long long)arg1;
- (double)preferredHeightForWidth:(double)arg1;
- (void)layoutSubviews;
- (void)layoutLabel;
- (id)_attributedDetailString;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithSpecifier:(id)arg1;

@end


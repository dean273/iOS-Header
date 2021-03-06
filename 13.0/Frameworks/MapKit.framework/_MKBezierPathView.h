//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _MKBezierPathView : UIView
{
    UIColor *_fillColor;
    UIColor *_strokeColor;
}

+ (id)_pathForBalloonRadius:(double)arg1 tailLength:(double)arg2;
+ (Class)layerClass;
- (void).cxx_destruct;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)setStrokeColor:(id)arg1 width:(double)arg2;
- (void)setFillColor:(id)arg1;
- (void)setPath:(id)arg1;
- (id)initWithOvalInSize:(struct CGSize)arg1;
- (id)initWithBalloonRadius:(double)arg1 tailLength:(double)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol AXPIFingerAppearanceDelegate;

@interface AXPIPinchChainView : UIView
{
    _Bool _pressed;
    _Bool _selected;
    id <AXPIFingerAppearanceDelegate> _appearanceDelegate;
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <AXPIFingerAppearanceDelegate> appearanceDelegate; // @synthesize appearanceDelegate=_appearanceDelegate;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic, getter=isPressed) _Bool pressed; // @synthesize pressed=_pressed;
@property(nonatomic) struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
- (void)drawRect:(struct CGRect)arg1;
- (_Bool)isUserInteractionEnabled;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableString, NSString;

@interface TPPasscodeView : UIView
{
    NSMutableString *_passcodeMutableString;
}

@property(retain) NSMutableString *passcodeMutableString; // @synthesize passcodeMutableString=_passcodeMutableString;
- (void).cxx_destruct;
- (void)clear;
- (void)deleteLastCharacter;
- (void)appendCharacter:(id)arg1;
@property(readonly) NSString *passcodeString; // @dynamic passcodeString;
- (struct CGSize)intrinsicContentSize;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKPlaceSectionRowView.h>

@class MKExpandingLabel, NSString;

__attribute__((visibility("hidden")))
@interface MKPlaceTextBlockCell : MKPlaceSectionRowView
{
    _Bool _constraintsAdded;
    MKExpandingLabel *_textBlock;
    NSString *_textBlockText;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool constraintsAdded; // @synthesize constraintsAdded=_constraintsAdded;
@property(copy, nonatomic) NSString *textBlockText; // @synthesize textBlockText=_textBlockText;
@property(retain, nonatomic) MKExpandingLabel *textBlock; // @synthesize textBlock=_textBlock;
@property(copy, nonatomic) CDUnknownBlockType textBlockResizedBlock;
@property(nonatomic, getter=isTextBlockExpanded) _Bool textBlockExpanded;
- (void)updateConstraints;
- (void)_contentSizeDidChange;
- (void)infoCardThemeChanged;
- (id)initWithFrame:(struct CGRect)arg1;

@end


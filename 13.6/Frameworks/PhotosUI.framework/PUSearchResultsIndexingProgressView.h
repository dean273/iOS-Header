//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface PUSearchResultsIndexingProgressView : UIView
{
    UILabel *_indexingLabel;
    UIActivityIndicatorView *_activityIndicator;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UILabel *indexingLabel; // @synthesize indexingLabel=_indexingLabel;
- (void)contentSizeCategoryChanged;
- (struct CGSize)intrinsicContentSize;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray;

@interface _PXActionStackedViewController : UIViewController
{
    double _separatorHeight;
    NSArray *_separatorViews;
    NSArray *_viewControllers;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
- (struct CGSize)preferredContentSize;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (id)initWithViewControllers:(id)arg1;

@end


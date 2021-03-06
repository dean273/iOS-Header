//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBBaseWelcomeController.h>

#import <OnBoardingKit/OBNavigationBarTitleTransistor-Protocol.h>
#import <OnBoardingKit/UIScrollViewDelegate-Protocol.h>
#import <OnBoardingKit/_UIScrollViewLayoutObserver-Protocol.h>

@class NSLayoutConstraint, NSString, OBBulletedList, OBButtonTray, OBContentView, OBHeaderView, OBNavigationBarDisplayState, UINavigationController, UIScrollView, UIView;

@interface OBWelcomeController : OBBaseWelcomeController <UIScrollViewDelegate, _UIScrollViewLayoutObserver, OBNavigationBarTitleTransistor>
{
    _Bool _darkMode;
    _Bool _scrollingDisabled;
    _Bool __shouldInlineButtontray;
    OBHeaderView *_headerView;
    OBContentView *_contentView;
    OBButtonTray *_buttonTray;
    long long _contentViewLayout;
    UIView *_bleedView;
    UIScrollView *_scrollView;
    UIView *_scrollContentView;
    UIView *_buttonTrayScrollContainerView;
    NSLayoutConstraint *_headerTopOffsetConstraint;
    NSLayoutConstraint *_contentViewTopOffsetConstraint;
    NSLayoutConstraint *_contentViewHeightConstraint;
    OBBulletedList *_bulletedList;
    unsigned long long _templateType;
    OBNavigationBarDisplayState *_cachedBarState;
    UINavigationController *_retainedNavigationController;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool _shouldInlineButtontray; // @synthesize _shouldInlineButtontray=__shouldInlineButtontray;
@property(retain, nonatomic) UINavigationController *retainedNavigationController; // @synthesize retainedNavigationController=_retainedNavigationController;
@property(retain, nonatomic) OBNavigationBarDisplayState *cachedBarState; // @synthesize cachedBarState=_cachedBarState;
@property(nonatomic) unsigned long long templateType; // @synthesize templateType=_templateType;
@property(retain, nonatomic) OBBulletedList *bulletedList; // @synthesize bulletedList=_bulletedList;
@property(retain, nonatomic) NSLayoutConstraint *contentViewHeightConstraint; // @synthesize contentViewHeightConstraint=_contentViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentViewTopOffsetConstraint; // @synthesize contentViewTopOffsetConstraint=_contentViewTopOffsetConstraint;
@property(retain, nonatomic) NSLayoutConstraint *headerTopOffsetConstraint; // @synthesize headerTopOffsetConstraint=_headerTopOffsetConstraint;
@property(retain, nonatomic) UIView *buttonTrayScrollContainerView; // @synthesize buttonTrayScrollContainerView=_buttonTrayScrollContainerView;
@property(retain, nonatomic) UIView *scrollContentView; // @synthesize scrollContentView=_scrollContentView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *bleedView; // @synthesize bleedView=_bleedView;
@property(nonatomic) long long contentViewLayout; // @synthesize contentViewLayout=_contentViewLayout;
@property(nonatomic, getter=isScrollingDisabled) _Bool scrollingDisabled; // @synthesize scrollingDisabled=_scrollingDisabled;
@property(nonatomic) _Bool darkMode; // @synthesize darkMode=_darkMode;
@property(retain, nonatomic) OBButtonTray *buttonTray; // @synthesize buttonTray=_buttonTray;
@property(retain, nonatomic) OBContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) OBHeaderView *headerView; // @synthesize headerView=_headerView;
- (void)_scrollViewDidLayoutSubviews:(id)arg1;
- (void)restoreNavigationBarAppearance;
- (void)setCurrentNavigationBarDisplayState:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateNavigationBarAnimated:(_Bool)arg1;
- (void)updateDirectionalLayoutMargins;
- (_Bool)_buttonTrayInlined;
- (void)_layoutButtonTray;
- (void)_updateScrollViewInsets;
- (void)_updateScrollContentViewLayoutMargins;
- (void)_updateButtonTrayBackdrop;
- (_Bool)_scrollViewContentIsUnderTray;
- (double)_headerTopOffset;
- (void)_updateHeaderTopOffsetConstraint;
- (double)_contentViewHeight;
- (_Bool)contentViewUnderButtonTray;
- (long long)navigationBarScrollToEdgeBehavior;
- (double)contentViewsTopPaddingFromBottomOfHeader;
- (void)setupBulletedListIfNeeded;
- (_Bool)shouldInlineButtonTray;
- (long long)preferredUserInterfaceStyle;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)setupHeaderViewIfNeeded:(id)arg1 detailedText:(id)arg2 icon:(id)arg3;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 contentLayout:(long long)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 contentLayout:(long long)arg4;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3;
- (id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3;
- (void)scrollRectToVisible:(struct CGRect)arg1 animated:(_Bool)arg2;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)addBulletedListItemWithTitle:(id)arg1 description:(id)arg2 image:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


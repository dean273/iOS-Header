//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "EKEventViewDelegate-Protocol.h"
#import "ImmunityFromCustomAdaptationOfPresentedViewControllersAcrossSizeClasses-Protocol.h"
#import "InboxSwitcherViewControllerDelegate-Protocol.h"
#import "PopoverContentView-Protocol.h"

@class CalendarModel, InboxSwitcherViewController, NSString, UINavigationController;

@interface InboxViewController : UIViewController <InboxSwitcherViewControllerDelegate, EKEventViewDelegate, PopoverContentView, ImmunityFromCustomAdaptationOfPresentedViewControllersAcrossSizeClasses>
{
    CalendarModel *_model;
    UINavigationController *_embeddedNavigationController;
    InboxSwitcherViewController *_switcherViewController;
    CDUnknownBlockType _doneBlock;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType doneBlock; // @synthesize doneBlock=_doneBlock;
- (_Bool)subPresentationsAreImmune;
- (_Bool)isImmuneToCustomAdaptation;
- (void)_dismissMessagesViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)_dismissMessagesViewController;
- (void)_pushDetailViewControllerForEvent:(id)arg1 animated:(_Bool)arg2 showComments:(_Bool)arg3 proposedTimeAttendee:(id)arg4;
- (void)showEvent:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) InboxSwitcherViewController *switcherViewController;
- (_Bool)canDismiss;
- (void)eventViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (id)inboxSwitcherViewControllerRightBarButtonItem:(id)arg1;
- (void)inboxSwitcherViewController:(id)arg1 viewProposedTimeForAttendee:(id)arg2 onEvent:(id)arg3;
- (void)inboxSwitcherViewController:(id)arg1 viewCommentsForEvent:(id)arg2;
- (void)inboxSwitcherViewController:(id)arg1 inspectEvent:(id)arg2;
- (void)_inspectEvent:(id)arg1 animated:(_Bool)arg2 showComments:(_Bool)arg3 proposedTimeAttendee:(id)arg4;
- (void)inboxSwitcherViewController:(id)arg1 shouldCloseAnimated:(_Bool)arg2;
- (_Bool)shouldAutorotate;
- (_Bool)prefersForcedModalShowViewController;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (struct CGSize)preferredContentSize;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


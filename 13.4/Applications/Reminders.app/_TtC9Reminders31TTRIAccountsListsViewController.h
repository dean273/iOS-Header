//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSUndoManager;

@interface _TtC9Reminders31TTRIAccountsListsViewController : UIViewController
{
    // Error parsing type: , name: searchSelection
    // Error parsing type: , name: presenter
    // Error parsing type: , name: viewModel
    // Error parsing type: , name: searchController
    // Error parsing type: , name: searchResultContainerViewController
    // Error parsing type: , name: pendingSearchTerm
    // Error parsing type: , name: newListButtonItem
    // Error parsing type: , name: chromelessToolbarUpdater
    // Error parsing type: , name: needsWorkaround51600172
    // Error parsing type: , name: accountSpinnerVisibleByAccountID
    // Error parsing type: , name: cachedShouldUseInsetedCellStyle
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)showFlaggedListAction:(id)arg1;
- (void)showScheduledListAction:(id)arg1;
- (void)showAllListAction:(id)arg1;
- (void)showTodayListAction:(id)arg1;
- (void)beginSearchAction:(id)arg1;
- (void)newListAction:(id)arg1;
- (void)didTapDone:(id)arg1;
- (void)didTapEdit:(id)arg1;
- (void)didTapNewGroup:(id)arg1;
- (void)didTapNewList:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, readonly) NSArray *keyCommands;
- (void)viewDidLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
@property(nonatomic, readonly) NSUndoManager *undoManager;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end


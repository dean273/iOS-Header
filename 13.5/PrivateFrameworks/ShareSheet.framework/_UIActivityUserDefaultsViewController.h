//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

#import <ShareSheet/UITableViewDelegate-Protocol.h>
#import <ShareSheet/_UIActivityUserDefaultsDataSourceProxy-Protocol.h>

@class NSArray, NSDictionary, NSDiffableDataSourceSnapshot, NSMutableDictionary, NSString, UIImage, UITableView, UIVisualEffectView, _UIActivityUserDefaults, _UIActivityUserDefaultsDataSource;
@protocol _UIActivityUserDefaultsViewControllerDelegate;

@interface _UIActivityUserDefaultsViewController : UIViewController <_UIActivityUserDefaultsDataSourceProxy, UITableViewDelegate>
{
    id <_UIActivityUserDefaultsViewControllerDelegate> _userDefaultsDelegate;
    NSArray *_activities;
    NSArray *_favoritesProxies;
    NSMutableDictionary *_favoritesByUUID;
    NSArray *_suggestionProxies;
    NSMutableDictionary *_suggestionsByUUID;
    NSDictionary *_activitiesByUUID;
    NSArray *_applicationActivities;
    NSArray *_orderedUUIDs;
    long long _activityCategory;
    _UIActivityUserDefaults *_userDefaults;
    UIImage *_placeholderImage;
    _UIActivityUserDefaultsDataSource *_diffableDataSource;
    NSDiffableDataSourceSnapshot *_currentSnapshot;
    UITableView *_tableView;
    UIVisualEffectView *_backgroundView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSDiffableDataSourceSnapshot *currentSnapshot; // @synthesize currentSnapshot=_currentSnapshot;
@property(retain, nonatomic) _UIActivityUserDefaultsDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property(retain, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property(retain, nonatomic) _UIActivityUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(nonatomic) long long activityCategory; // @synthesize activityCategory=_activityCategory;
@property(retain, nonatomic) NSArray *orderedUUIDs; // @synthesize orderedUUIDs=_orderedUUIDs;
@property(retain, nonatomic) NSArray *applicationActivities; // @synthesize applicationActivities=_applicationActivities;
@property(retain, nonatomic) NSDictionary *activitiesByUUID; // @synthesize activitiesByUUID=_activitiesByUUID;
@property(retain, nonatomic) NSMutableDictionary *suggestionsByUUID; // @synthesize suggestionsByUUID=_suggestionsByUUID;
@property(copy, nonatomic) NSArray *suggestionProxies; // @synthesize suggestionProxies=_suggestionProxies;
@property(retain, nonatomic) NSMutableDictionary *favoritesByUUID; // @synthesize favoritesByUUID=_favoritesByUUID;
@property(copy, nonatomic) NSArray *favoritesProxies; // @synthesize favoritesProxies=_favoritesProxies;
@property(copy, nonatomic) NSArray *activities; // @synthesize activities=_activities;
@property(nonatomic) __weak id <_UIActivityUserDefaultsViewControllerDelegate> userDefaultsDelegate; // @synthesize userDefaultsDelegate=_userDefaultsDelegate;
- (long long)preferredActivityCategory;
- (void)toggleActivityHiddenForRowAtIndexPath:(id)arg1;
- (void)toggleActivityHiddenForControl:(id)arg1;
- (id)activityForRowAtIndexPath:(id)arg1;
- (id)cellForItemIdentifier:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didHighlightRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)dismissUserDefaults;
- (void)doneEditingUserDefaults;
- (void)editUserDefaults;
- (void)traitCollectionDidChange:(id)arg1;
- (void)configureSwitchForCell:(id)arg1 activityProxy:(id)arg2;
- (void)updateUserDefaultsAnimated:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithFavoritesProxies:(id)arg1 suggestionProxies:(id)arg2 activitiesByUUID:(id)arg3 applicationActivities:(id)arg4 orderedUUIDs:(id)arg5 activityCategory:(long long)arg6;
- (id)initWithActivities:(id)arg1 userDefaults:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


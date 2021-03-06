//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterUI/GKExtensionRemoteViewController.h>

#import <GameCenterUI/GKAuthenticateHostProtocol-Protocol.h>

@class GKGame, GKHostedAuthenticateViewController, NSString;

@interface GKAuthenticateHostViewController : GKExtensionRemoteViewController <GKAuthenticateHostProtocol>
{
    GKHostedAuthenticateViewController *_delegateWeak;
}

+ (_Bool)dismissAutomaticallyAfterExtensionCompletion;
+ (id)authenticateExtension;
- (void)applicationWillTerminate:(id)arg1;
- (void)extensionIsCanceling;
- (void)extensionIsFinishing;
- (void)messageFromExtension:(id)arg1;
@property(nonatomic) GKHostedAuthenticateViewController *delegate; // @synthesize delegate=_delegateWeak;
- (void)dealloc;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GKGame *game;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


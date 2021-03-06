//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSXPCConnection, TIKeyboardInputManagerBase, TIKeyboardInputManagerLoaderSyncHelper;

@interface TIKeyboardInputManagerLoader : NSObject
{
    TIKeyboardInputManagerLoaderSyncHelper *_helper;
    NSMutableDictionary *_availableInputManagers;
    NSMutableDictionary *_lastUsedDate;
    NSMutableDictionary *_activeInputManagers;
    NSXPCConnection *_interactingConnection;
    TIKeyboardInputManagerBase *_mostRecentlyRequested;
}

+ (id)sharedLoader;
- (void).cxx_destruct;
@property(retain, nonatomic) TIKeyboardInputManagerBase *mostRecentlyRequested; // @synthesize mostRecentlyRequested=_mostRecentlyRequested;
@property(nonatomic) NSXPCConnection *interactingConnection; // @synthesize interactingConnection=_interactingConnection;
- (void)registerMaintenanceActivity;
- (id)activeInputModeIdentifiers;
- (void)jettisonAllActiveInputManagers;
- (_Bool)isActiveInputManager:(id)arg1;
- (_Bool)hasActiveInputManagers;
- (id)resourceInputModes;
- (void)reduceCacheToSize:(unsigned long long)arg1;
- (void)cacheInputManager:(id)arg1;
- (id)inputManagerForInputMode:(id)arg1 withKeyboardState:(id)arg2 class:(Class)arg3;
- (void)startSyncHelper;
- (void)dealloc;
- (id)init;

@end


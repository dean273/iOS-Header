//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MNObserverHashTable, MNSettings;

@interface MNSettingsManager : NSObject
{
    MNSettings *_settings;
    MNObserverHashTable *_observers;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) MNSettings *settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
- (void)setVolumeFromDefaults;
- (void)updateForSettings:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@class SBEntityRemovalDosidoDefaultAnimationSettings, SBEntityRemovalDosidoSlideOutDownwardAnimationSettings, SBEntityRemovalDosidoSlideOutUpwardAnimationSettings, SBEntityRemovalFloatingDefaultAnimationSettings, SBEntityRemovalFloatingSlideOutDownwardAnimationSettings, SBEntityRemovalFloatingSlideOutUpwardAnimationSettings, SBEntityRemovalMedusaDefaultAnimationSettings, SBEntityRemovalMedusaSlideOutDownwardAnimationSettings, SBEntityRemovalMedusaSlideOutUpwardAnimationSettings;

@interface SBEntityRemovalAnimationSettings : PTSettings
{
    SBEntityRemovalMedusaDefaultAnimationSettings *_medusaDeleteIntentAnimationSettings;
    SBEntityRemovalMedusaSlideOutUpwardAnimationSettings *_medusaCommitIntentAnimationSettings;
    SBEntityRemovalMedusaSlideOutDownwardAnimationSettings *_medusaDeclineIntentAnimationSettings;
    SBEntityRemovalFloatingDefaultAnimationSettings *_floatingDeleteIntentAnimationSettings;
    SBEntityRemovalFloatingSlideOutUpwardAnimationSettings *_floatingCommitIntentAnimationSettings;
    SBEntityRemovalFloatingSlideOutDownwardAnimationSettings *_floatingDeclineIntentAnimationSettings;
    SBEntityRemovalDosidoDefaultAnimationSettings *_dosidoDeleteIntentAnimationSettings;
    SBEntityRemovalDosidoSlideOutUpwardAnimationSettings *_dosidoCommitIntentAnimationSettings;
    SBEntityRemovalDosidoSlideOutDownwardAnimationSettings *_dosidoDeclineIntentAnimationSettings;
}

+ (id)settingsControllerModule;
- (void).cxx_destruct;
@property(retain, nonatomic) SBEntityRemovalDosidoSlideOutDownwardAnimationSettings *dosidoDeclineIntentAnimationSettings; // @synthesize dosidoDeclineIntentAnimationSettings=_dosidoDeclineIntentAnimationSettings;
@property(retain, nonatomic) SBEntityRemovalDosidoSlideOutUpwardAnimationSettings *dosidoCommitIntentAnimationSettings; // @synthesize dosidoCommitIntentAnimationSettings=_dosidoCommitIntentAnimationSettings;
@property(retain, nonatomic) SBEntityRemovalDosidoDefaultAnimationSettings *dosidoDeleteIntentAnimationSettings; // @synthesize dosidoDeleteIntentAnimationSettings=_dosidoDeleteIntentAnimationSettings;
@property(retain, nonatomic) SBEntityRemovalFloatingSlideOutDownwardAnimationSettings *floatingDeclineIntentAnimationSettings; // @synthesize floatingDeclineIntentAnimationSettings=_floatingDeclineIntentAnimationSettings;
@property(retain, nonatomic) SBEntityRemovalFloatingSlideOutUpwardAnimationSettings *floatingCommitIntentAnimationSettings; // @synthesize floatingCommitIntentAnimationSettings=_floatingCommitIntentAnimationSettings;
@property(retain, nonatomic) SBEntityRemovalFloatingDefaultAnimationSettings *floatingDeleteIntentAnimationSettings; // @synthesize floatingDeleteIntentAnimationSettings=_floatingDeleteIntentAnimationSettings;
@property(retain, nonatomic) SBEntityRemovalMedusaSlideOutDownwardAnimationSettings *medusaDeclineIntentAnimationSettings; // @synthesize medusaDeclineIntentAnimationSettings=_medusaDeclineIntentAnimationSettings;
@property(retain, nonatomic) SBEntityRemovalMedusaSlideOutUpwardAnimationSettings *medusaCommitIntentAnimationSettings; // @synthesize medusaCommitIntentAnimationSettings=_medusaCommitIntentAnimationSettings;
@property(retain, nonatomic) SBEntityRemovalMedusaDefaultAnimationSettings *medusaDeleteIntentAnimationSettings; // @synthesize medusaDeleteIntentAnimationSettings=_medusaDeleteIntentAnimationSettings;

@end


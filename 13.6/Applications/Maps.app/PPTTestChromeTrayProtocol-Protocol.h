//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIScrollView;

@protocol PPTTestChromeTrayProtocol <NSObject>
@property(readonly, nonatomic) UIScrollView *pptTestScrollView;
@property(readonly, nonatomic) _Bool pptTestCanUpdateTrayLayout;
- (void)pptTestDismissTrayAnimated:(_Bool)arg1 assertTrayType:(long long)arg2;
- (_Bool)pptTestIsTrayType:(long long)arg1;
- (void)pptTestUpdateTrayLayout:(unsigned long long)arg1 animated:(_Bool)arg2;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ScreenTimeUI/STGroupSpecifierProvider.h>

@class NSObject;
@protocol STRootViewModelCoordinator;

__attribute__((visibility("hidden")))
@interface STUsageGroupSpecifierProvider : STGroupSpecifierProvider
{
    NSObject<STRootViewModelCoordinator> *_coordinator;
}

+ (id)providerWithCoordinator:(id)arg1;
@property(retain, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator; // @synthesize coordinator=_coordinator;
- (void).cxx_destruct;
- (void)invalidate;

@end


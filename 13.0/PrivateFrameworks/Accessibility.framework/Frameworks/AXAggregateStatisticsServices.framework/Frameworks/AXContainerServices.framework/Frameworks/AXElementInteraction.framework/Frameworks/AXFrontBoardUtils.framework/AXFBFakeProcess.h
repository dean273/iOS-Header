//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AXFBFakeProcessState, NSString;

@interface AXFBFakeProcess : NSObject
{
    AXFBFakeProcessState *_state;
    NSString *_bundleIdentifier;
}

@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) AXFBFakeProcessState *state; // @synthesize state=_state;
- (void).cxx_destruct;

@end


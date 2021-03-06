//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/NSSecureCoding-Protocol.h>

@class NSArray;

@interface AXReplayableGesture : NSObject <NSSecureCoding>
{
    NSArray *_allEvents;
    _Bool _arePointsDeviceRelative;
}

+ (id)tapGestureForInterfaceOrientedPoint:(struct CGPoint)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)updateForLandscape:(_Bool)arg1;
- (_Bool)arePointsDeviceRelative;
- (double)forceForFingerIdentifier:(id)arg1 atEventIndex:(unsigned long long)arg2;
- (struct CGPoint)pointForFingerIdentifier:(id)arg1 atEventIndex:(unsigned long long)arg2;
- (double)timeAtEventIndex:(unsigned long long)arg1;
- (id)fingerIdentifiersAtEventIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfEvents;

@end


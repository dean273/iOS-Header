//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCoding-Protocol.h>

@class NSArray, NSSet;

__attribute__((visibility("hidden")))
@interface _UITraitStorageList : NSObject <NSCoding>
{
    id _topLevelObject;
    NSArray *_traitStorages;
    NSSet *_descendants;
}

@property(readonly, nonatomic) NSSet *descendants; // @synthesize descendants=_descendants;
@property(readonly, nonatomic) NSArray *traitStorages; // @synthesize traitStorages=_traitStorages;
@property(readonly, nonatomic) __weak id topLevelObject; // @synthesize topLevelObject=_topLevelObject;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTopLevelObject:(id)arg1 traitStorages:(id)arg2 descendants:(id)arg3;

@end


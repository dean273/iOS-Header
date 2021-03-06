//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>
#import <MediaPlayer/NSMutableCopying-Protocol.h>
#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class NSDictionary, NSSet;

@interface MPPropertySet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSSet *_properties;
    NSDictionary *_relationships;
}

+ (_Bool)supportsSecureCoding;
+ (id)propertySetWithProperties:(id)arg1;
+ (id)emptyPropertySet;
@property(readonly, nonatomic) NSDictionary *relationships; // @synthesize relationships=_relationships;
@property(readonly, nonatomic) NSSet *properties; // @synthesize properties=_properties;
- (void).cxx_destruct;
- (id)propertySetByIntersectingWithPropertySet:(id)arg1;
- (id)propertySetByCombiningWithPropertySet:(id)arg1;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (_Bool)containsPropertySet:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)debugDescription;
- (id)initWithProperties:(id)arg1 relationships:(id)arg2;

@end


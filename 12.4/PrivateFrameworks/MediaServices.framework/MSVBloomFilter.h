//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaServices/NSSecureCoding-Protocol.h>

@interface MSVBloomFilter : NSObject <NSSecureCoding>
{
    struct __CFBitVector *_vector;
    long long _vectorCapacity;
    unsigned long long _murmurSeed;
    long long _hashCount;
    float _falsePositiveTolerance;
    long long _capacity;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) float falsePositiveTolerance; // @synthesize falsePositiveTolerance=_falsePositiveTolerance;
@property(readonly, nonatomic) long long capacity; // @synthesize capacity=_capacity;
- (unsigned long long)_murmur2HashObject:(id)arg1;
- (unsigned long long)_fnvHashObject:(id)arg1;
- (id)_vectorIndexSetForObject:(id)arg1;
@property(readonly, nonatomic) long long estimatedCount;
@property(readonly, nonatomic) float falsePositiveProbability;
- (_Bool)containsObject:(id)arg1;
- (void)addObject:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithCapacity:(long long)arg1 falsePositiveTolerance:(float)arg2 murmurSeed:(unsigned long long)arg3;
- (id)initWithCapacity:(long long)arg1 falsePositiveTolerance:(float)arg2;

@end


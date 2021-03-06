//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextInput/NSCopying-Protocol.h>
#import <TextInput/NSSecureCoding-Protocol.h>

@class NSOrderedSet, NSString;

@interface TIKeyboardCandidateGroup : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_title;
    NSOrderedSet *_candidates;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) NSOrderedSet *candidates; // @synthesize candidates=_candidates;
@property(copy) NSString *title; // @synthesize title=_title;
- (id)description;
- (void)addCandidate:(id)arg1;
- (_Bool)hasAlternativeText;
- (id)mutableCandidates;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithTitle:(id)arg1 candidates:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end


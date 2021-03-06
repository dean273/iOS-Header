//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@interface HMCameraClipVideoSegment : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _initSegment;
    double _duration;
    unsigned long long _byteLength;
    unsigned long long _byteOffset;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, getter=isInitSegment) _Bool initSegment; // @synthesize initSegment=_initSegment;
@property(readonly) unsigned long long byteOffset; // @synthesize byteOffset=_byteOffset;
@property(readonly) unsigned long long byteLength; // @synthesize byteLength=_byteLength;
@property(readonly) double duration; // @synthesize duration=_duration;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithDuration:(double)arg1 byteLength:(unsigned long long)arg2 byteOffset:(unsigned long long)arg3 isInitSegment:(_Bool)arg4;

@end


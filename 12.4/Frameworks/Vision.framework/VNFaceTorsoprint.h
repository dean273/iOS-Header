//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNEspressoModelImageprint.h>

@class VNFaceprint, VNTorsoprint;

@interface VNFaceTorsoprint : VNEspressoModelImageprint
{
    VNFaceprint *_faceprint;
    VNTorsoprint *_torsoprint;
}

+ (unsigned long long)currentSerializationVersion;
+ (_Bool)supportsSecureCoding;
+ (unsigned long long)serializationMagicNumber;
+ (id)codingTypesToCodingKeys;
+ (unsigned int)currentCodingVersion;
+ (id)currentVersion;
@property(readonly, nonatomic) VNTorsoprint *torsoprint; // @synthesize torsoprint=_torsoprint;
@property(readonly, nonatomic) VNFaceprint *faceprint; // @synthesize faceprint=_faceprint;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isValidTorsoprint) _Bool validTorsoprint;
- (id)computeDistance:(id)arg1 withDistanceFunction:(unsigned long long)arg2 error:(id *)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFaceprint:(id)arg1 torsoPrint:(id)arg2 requestRevision:(unsigned long long)arg3;

@end


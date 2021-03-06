//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUImageTransform.h>

@interface NUImageTransformAffine : NUImageTransform
{
    struct CGAffineTransform _transformInv;
    struct CGAffineTransform _transform;
}

@property(readonly) struct CGAffineTransform transform; // @synthesize transform=_transform;
- (void)nu_updateDigest:(id)arg1;
- (_Bool)isEqualToGeometryTransformAffine:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (struct CGPoint)transformPoint:(struct CGPoint)arg1;
- (id)inverseTransform;
- (id)init;
- (id)initWithAffineTransform:(struct CGAffineTransform)arg1;

@end


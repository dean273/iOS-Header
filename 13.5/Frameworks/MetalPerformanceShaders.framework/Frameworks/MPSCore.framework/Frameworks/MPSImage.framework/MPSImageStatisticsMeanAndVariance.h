//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPSImage/MPSUnaryImageKernel.h>

@interface MPSImageStatisticsMeanAndVariance : MPSUnaryImageKernel
{
    CDStruct_1e3be3a8 _clipRectSource;
}

+ (const struct MPSLibraryInfo *)libraryInfo;
@property(nonatomic) CDStruct_1e3be3a8 clipRectSource; // @synthesize clipRectSource=_clipRectSource;
- (id)copyWithZone:(struct _NSZone *)arg1 device:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 device:(id)arg2;
- (id)debugDescription;
- (id)initWithDevice:(id)arg1;
- (void)initEncoder;

@end


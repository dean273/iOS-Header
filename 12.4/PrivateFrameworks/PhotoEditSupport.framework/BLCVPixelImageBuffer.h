//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoEditSupport/BLPixelImageBuffer.h>

@interface BLCVPixelImageBuffer : BLPixelImageBuffer
{
    struct __CVBuffer *_pixelBuffer;
    struct CGContext *_cgcontext;
}

- (struct CGContext *)cgcontext;
- (struct __CVBuffer *)pixelBuffer;
- (void)accessPixelsByContextInBlock:(CDUnknownBlockType)arg1;
- (void)accessPixelsByAddressInBlock:(CDUnknownBlockType)arg1;
- (void)readPixelsByAddressInBlock:(CDUnknownBlockType)arg1;
- (void)renderCIImage:(id)arg1;
- (id)ciImage;
- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1 colorManagement:(int)arg2;

@end


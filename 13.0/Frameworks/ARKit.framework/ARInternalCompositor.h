//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ARMatteGenerator, ARPresentation, ARPresentationDescriptor, ARPresentationDisplay, ARPresentationFramePool, ARPresentationOverrides, NSArray;
@protocol MTLBuffer, MTLCommandQueue, MTLRenderPipelineState;

@interface ARInternalCompositor : NSObject
{
    ARPresentationDescriptor *_descriptor;
    ARPresentationDisplay *_display;
    ARPresentationFramePool *_framePool;
    ARPresentation *_presentation;
    id <MTLCommandQueue> _commandQueue;
    NSArray *_eyes;
    int _eyeCount;
    id <MTLRenderPipelineState> _forwardFlowPipelineState;
    id <MTLRenderPipelineState> _posWarpPipelineState;
    id <MTLRenderPipelineState> _rotWarpPipelineState;
    id <MTLRenderPipelineState> _heldPipelineState;
    id <MTLRenderPipelineState> _alignmentPipelineState;
    id <MTLBuffer> _alignmentVertexBuffer;
    id <MTLBuffer> _forwardFlowVertexBuffer;
    ARMatteGenerator *_matteGenerator;
    float _markerHeight;
    float _markerThickness;
    _Bool _showAlignmentMarker;
    _Bool _isReady;
    _Bool _isInitialized;
    _Bool _usePackedVertices;
    _Bool _supportsMatting;
    ARPresentationOverrides *_overrides;
}

- (void).cxx_destruct;
- (id)createDistortionVertexPipeline:(id)arg1 vs:(id)arg2 fs:(id)arg3;
- (id)createFullscreenQuadPipeline:(id)arg1 vs:(id)arg2 fs:(id)arg3;
- (_Bool)createForwardFlowPipelineStateWithMTLLib:(id)arg1;
- (_Bool)createCompositeHeldModePipelineStateWithMTLLib:(id)arg1;
- (_Bool)createRotWarpPipelineStateWithMTLLib:(id)arg1;
- (_Bool)createPosWarpPipelineStateWithMTLLib:(id)arg1;
- (_Bool)createAlignmentLinePipelineStateWithMTLLib:(id)arg1;
- (void)setupMonoOrNoDistortion;
- (id)compositeAndDistortFrame:(id)arg1 destinationTexture:(id)arg2 backgroundPixelBuffer:(struct __CVBuffer *)arg3;
- (void)_prepare;
@property(readonly, nonatomic, getter=isWarpActive) _Bool warpActive;
@property(readonly, nonatomic) _Bool isInitialized;
- (void)warpAndDistortWornMode:(id)arg1 commandBuffer:(id)arg2 outputTarget:(id)arg3;
- (CDStruct_ff515195)setupDistortWithFrame:(id)arg1;
- (void)compositeHeldMode:(id)arg1 commandBuffer:(id)arg2 outputTarget:(id)arg3 backgroundPixelBuffer:(struct __CVBuffer *)arg4;
- (float)gammaFromLuminance:(float)arg1;
- (id)_createTextureFromPixelBuffer:(struct __CVBuffer *)arg1 pixelFormat:(unsigned long long)arg2 planeIndex:(long long)arg3;
- (void)dealloc;
- (void)setDescriptor:(id)arg1 display:(id)arg2;
- (id)initWithCommandQueue:(id)arg1 presentation:(id)arg2 framePool:(id)arg3 overrides:(id)arg4;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSDrawables/NSObject-Protocol.h>

@class NSSet, TSDCanvas, TSDRep, TSKDocumentRoot;
@protocol TSDCanvasProxyDelegate;

@protocol TSDCanvasDelegate <NSObject>
- (TSKDocumentRoot *)documentRoot;

@optional
@property(readonly, nonatomic) id <TSDCanvasProxyDelegate> canvasProxyDelegate;
- (_Bool)imageIsRenderingForMovie;
- (_Bool)textLayoutMustIncludeAdornments;
- (_Bool)isRenderingForKPF;
- (_Bool)supportsAdaptiveLayout;
- (_Bool)isCanvasDrawingIntoPDF:(TSDCanvas *)arg1;
- (_Bool)shouldShowInstructionalText;
- (_Bool)shouldShowTextCommentHighlightsForCanvas:(TSDCanvas *)arg1;
- (_Bool)shouldShowCommentsForCanvas:(TSDCanvas *)arg1;
- (_Bool)shouldShowTextOverflowGlyphs;
- (_Bool)shouldSuppressBackgrounds;
- (_Bool)spellCheckingSuppressed;
- (_Bool)spellCheckingSupported;
- (_Bool)isPrintingCanvas;
- (_Bool)wantsEditingLayoutsForOffscreenInfos;
- (_Bool)isCanvasInteractive;
- (void)canvas:(TSDCanvas *)arg1 createdRep:(TSDRep *)arg2;
- (NSSet *)infosToHideForCanvas:(TSDCanvas *)arg1;
- (NSSet *)additionalVisibleInfosForCanvas:(TSDCanvas *)arg1;
- (struct CGRect)visibleScaledBoundsForClippingRepsOnCanvas:(TSDCanvas *)arg1;
- (void)updateLayerTreeForInteractiveCanvas:(TSDCanvas *)arg1;
- (void)canvasWillUpdateRepsFromLayouts:(TSDCanvas *)arg1;
- (void)canvasDidValidateLayoutsWithDependencies:(TSDCanvas *)arg1;
- (void)canvasDidLayout:(TSDCanvas *)arg1;
- (void)canvasDidValidateLayouts:(TSDCanvas *)arg1;
- (void)canvasWillValidateLayouts:(TSDCanvas *)arg1;
- (void)canvasLayoutInvalidated:(TSDCanvas *)arg1;
- (Class)canvasRootLayoutClass;
@end


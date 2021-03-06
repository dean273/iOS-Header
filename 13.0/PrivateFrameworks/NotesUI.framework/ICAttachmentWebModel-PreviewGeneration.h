//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/ICAttachmentWebModel.h>

@interface ICAttachmentWebModel (PreviewGeneration)
+ (struct UIImage *)genericBrickThumbnailWithSize:(struct CGSize)arg1 scale:(double)arg2;
- (void)saveLPImage:(id)arg1;
- (void)updateTitle:(id)arg1 andDescription:(id)arg2;
- (_Bool)generatePreviewsInOperation:(id)arg1;
- (_Bool)generateAsynchronousPreviews;
- (_Bool)needToGeneratePreviews;
- (CDUnknownBlockType)genericBrickLargeThumbnailCreator;
- (CDUnknownBlockType)genericBrickThumbnailCreator;
- (CDUnknownBlockType)genericListThumbnailCreator;
@end


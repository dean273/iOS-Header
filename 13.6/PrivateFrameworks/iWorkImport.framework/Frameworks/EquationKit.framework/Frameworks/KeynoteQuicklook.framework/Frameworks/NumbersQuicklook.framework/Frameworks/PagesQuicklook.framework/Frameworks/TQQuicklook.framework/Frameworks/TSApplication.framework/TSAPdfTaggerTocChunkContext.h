//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSApplication/TSAPdfTaggerContext.h>

@class NSMutableDictionary, TSWPTOCRep;

@interface TSAPdfTaggerTocChunkContext : TSAPdfTaggerContext
{
    NSMutableDictionary *_paragraphStyleToLevelMap;
    TSWPTOCRep *_tocChunkRep;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) TSWPTOCRep *tocChunkRep; // @synthesize tocChunkRep=_tocChunkRep;
- (void)setUp;
- (int)levelForParagraphStyle:(id)arg1;
- (id)initWithStateOfTagger:(id)arg1 tocChunkRep:(id)arg2;

@end


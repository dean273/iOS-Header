//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSText/NSObject-Protocol.h>

@class TSWPParagraphStyle;

@protocol TSWPStyleProvider <NSObject>
- (TSWPParagraphStyle *)paragraphStyleAtParIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;

@optional
@property(readonly, nonatomic) _Bool supportsBoldItalicUnderlineShortcuts;
@end


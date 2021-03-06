//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface WBSFaviconProviderIconInfo : NSObject
{
    _Bool _hasGeneratedResolutions;
    _Bool _isRejectedResource;
    NSString *_pageURLString;
    NSString *_iconURLString;
    NSString *_UUIDString;
    NSDate *_dateAdded;
    struct CGSize _size;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isRejectedResource; // @synthesize isRejectedResource=_isRejectedResource;
@property(readonly, nonatomic) _Bool hasGeneratedResolutions; // @synthesize hasGeneratedResolutions=_hasGeneratedResolutions;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) NSDate *dateAdded; // @synthesize dateAdded=_dateAdded;
@property(readonly, copy, nonatomic) NSString *UUIDString; // @synthesize UUIDString=_UUIDString;
@property(readonly, copy, nonatomic) NSString *iconURLString; // @synthesize iconURLString=_iconURLString;
@property(readonly, copy, nonatomic) NSString *pageURLString; // @synthesize pageURLString=_pageURLString;
- (id)initWithPageURLString:(id)arg1 iconURLString:(id)arg2 UUIDString:(id)arg3 dateAdded:(id)arg4 size:(struct CGSize)arg5 hasGeneratedResolutions:(_Bool)arg6 isRejectedResource:(_Bool)arg7;
- (id)init;

@end


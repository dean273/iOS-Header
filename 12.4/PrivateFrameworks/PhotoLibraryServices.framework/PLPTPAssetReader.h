//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PLPTPAssetReader : NSObject
{
    NSString *_path;
    id _userInfo;
}

@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)description;
- (id)dataSourcePathForDataRange:(struct _NSRange)arg1 error:(id *)arg2;
- (id)initWithPath:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Preferences/NSCopying-Protocol.h>

@class NSDictionary;

@interface PSSpecifierUpdateContext : NSObject <NSCopying>
{
    _Bool _animated;
    _Bool _updateModelOnly;
    NSDictionary *_userInfo;
}

+ (id)contextWithUserInfo:(id)arg1;
+ (id)context;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) _Bool updateModelOnly; // @synthesize updateModelOnly=_updateModelOnly;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


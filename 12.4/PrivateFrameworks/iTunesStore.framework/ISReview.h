//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesStore/NSCopying-Protocol.h>
#import <iTunesStore/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface ISReview : NSObject <NSSecureCoding, NSCopying>
{
    long long _assetType;
    NSString *_body;
    unsigned long long _bodyMaxLength;
    NSURL *_infoURL;
    unsigned long long _itemIdentifier;
    NSString *_nickname;
    _Bool _nicknameIsConfirmed;
    unsigned long long _nicknameMaxLength;
    float _rating;
    NSURL *_submitURL;
    NSString *_title;
    unsigned long long _titleMaxLength;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long titleMaxLength; // @synthesize titleMaxLength=_titleMaxLength;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSURL *submitURL; // @synthesize submitURL=_submitURL;
@property(nonatomic) float rating; // @synthesize rating=_rating;
@property(nonatomic) unsigned long long nicknameMaxLength; // @synthesize nicknameMaxLength=_nicknameMaxLength;
@property(nonatomic) _Bool nicknameIsConfirmed; // @synthesize nicknameIsConfirmed=_nicknameIsConfirmed;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(nonatomic) unsigned long long itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property(retain, nonatomic) NSURL *infoURL; // @synthesize infoURL=_infoURL;
@property(nonatomic) unsigned long long bodyMaxLength; // @synthesize bodyMaxLength=_bodyMaxLength;
@property(retain, nonatomic) NSString *body; // @synthesize body=_body;
@property(nonatomic) long long assetType; // @synthesize assetType=_assetType;
- (id)_draftsDirectoryPath;
- (id)_draftFileName;
- (_Bool)saveAsDraft;
- (_Bool)restoreFromDraft;
- (_Bool)removeDraft;
- (void)mergeWithReview:(id)arg1 preferLocalValues:(_Bool)arg2;
- (void)loadFromDictionary:(id)arg1;
@property(readonly, nonatomic) _Bool hasSavedDraft;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;

@end


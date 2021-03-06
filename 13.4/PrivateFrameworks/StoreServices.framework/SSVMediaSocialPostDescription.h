//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>
#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSArray, NSNumber, NSString;

@interface SSVMediaSocialPostDescription : NSObject <NSCopying, SSXPCCoding>
{
    NSNumber *_accountIdentifier;
    NSArray *_attachments;
    _Bool _attributed;
    NSString *_authorIdentifier;
    NSString *_authorType;
    NSArray *_contentItems;
    NSArray *_externalServiceDestinations;
    NSString *_sourceApplicationIdentifier;
    NSString *_text;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *sourceApplicationIdentifier; // @synthesize sourceApplicationIdentifier=_sourceApplicationIdentifier;
@property(copy, nonatomic) NSArray *externalServiceDestinations; // @synthesize externalServiceDestinations=_externalServiceDestinations;
@property(copy, nonatomic) NSArray *contentItems; // @synthesize contentItems=_contentItems;
@property(copy, nonatomic) NSString *authorType; // @synthesize authorType=_authorType;
@property(copy, nonatomic) NSString *authorIdentifier; // @synthesize authorIdentifier=_authorIdentifier;
@property(nonatomic, getter=isAttributed) _Bool attributed; // @synthesize attributed=_attributed;
@property(copy, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property(copy, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


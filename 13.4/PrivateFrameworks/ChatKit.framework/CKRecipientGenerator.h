//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CKRecipientGenerator : NSObject
{
    NSArray *_searchABPropertyTypes;
}

+ (id)sharedRecipientGenerator;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *searchABPropertyTypes; // @synthesize searchABPropertyTypes=_searchABPropertyTypes;
- (void)_appendSearchResults:(id)arg1 identifiers:(id)arg2 abPropertyType:(int)arg3 toArray:(id)arg4;
- (id)recipientWithAddress:(id)arg1;
- (id)recipientWithContactProperty:(id)arg1;
- (void)getAddressForContact:(id)arg1 address:(id *)arg2 kind:(unsigned long long *)arg3;
- (id)recipientWithContact:(id)arg1;

@end


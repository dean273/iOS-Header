//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GSAddition;

__attribute__((visibility("hidden")))
@interface QLThumbnailCachedAddition : NSObject
{
    GSAddition *_addition;
    unsigned long long _fileID;
}

- (void).cxx_destruct;
@property(retain) GSAddition *addition; // @synthesize addition=_addition;
- (_Bool)isStillValid;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithAddition:(id)arg1;

@end


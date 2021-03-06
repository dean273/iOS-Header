//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFoundation/AVLoggingIdentifier-Protocol.h>

@class AVSpecifiedLoggingIdentifierInternal, NSString;

@interface AVSpecifiedLoggingIdentifier : NSObject <AVLoggingIdentifier>
{
    AVSpecifiedLoggingIdentifierInternal *_specifiedLoggingIdentifier;
}

@property(readonly, copy) NSString *description;
@property(readonly) NSString *name;
- (void)finalize;
- (void)dealloc;
- (id)initWithSpecifiedName:(id)arg1;
- (id)makeDerivedIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


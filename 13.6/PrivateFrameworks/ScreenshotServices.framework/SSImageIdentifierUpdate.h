//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenshotServices/BSXPCCoding-Protocol.h>
#import <ScreenshotServices/SSLoggable-Protocol.h>

@class BSSettings, NSString;

@interface SSImageIdentifierUpdate : NSObject <BSXPCCoding, SSLoggable>
{
    NSString *_imageIdentifier;
    NSString *_environmentDescriptionIdentifier;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *environmentDescriptionIdentifier; // @synthesize environmentDescriptionIdentifier=_environmentDescriptionIdentifier;
@property(copy, nonatomic) NSString *imageIdentifier; // @synthesize imageIdentifier=_imageIdentifier;
@property(readonly, nonatomic) NSString *loggableDescription;
@property(readonly, nonatomic) BSSettings *bsSettings;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


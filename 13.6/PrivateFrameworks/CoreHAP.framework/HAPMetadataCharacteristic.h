//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HAPMetadataCharacteristicValue, NSNumber, NSString;

@interface HAPMetadataCharacteristic : HMFObject
{
    NSString *_name;
    NSString *_chrDescription;
    NSString *_uuidStr;
    NSNumber *_properties;
    NSString *_format;
    NSString *_units;
    HAPMetadataCharacteristicValue *_valueMetadata;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HAPMetadataCharacteristicValue *valueMetadata; // @synthesize valueMetadata=_valueMetadata;
@property(retain, nonatomic) NSString *units; // @synthesize units=_units;
@property(retain, nonatomic) NSString *format; // @synthesize format=_format;
@property(retain, nonatomic) NSNumber *properties; // @synthesize properties=_properties;
@property(retain, nonatomic) NSString *uuidStr; // @synthesize uuidStr=_uuidStr;
@property(retain, nonatomic) NSString *chrDescription; // @synthesize chrDescription=_chrDescription;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)dump;
- (id)description;
- (id)generateDictionary:(id)arg1;
- (id)initWithName:(id)arg1 uuid:(id)arg2 description:(id)arg3 format:(id)arg4 properties:(id)arg5;

@end


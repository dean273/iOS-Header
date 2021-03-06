//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData;

@interface NPKProtoUpdatedAccountsForProvisioningResponse : PBCodable <NSCopying>
{
    NSData *_accountsOnDeviceData;
    NSData *_accountsRequiringProvisioningData;
    _Bool _pending;
    CDStruct_eab6c78c _has;
}

@property(retain, nonatomic) NSData *accountsOnDeviceData; // @synthesize accountsOnDeviceData=_accountsOnDeviceData;
@property(retain, nonatomic) NSData *accountsRequiringProvisioningData; // @synthesize accountsRequiringProvisioningData=_accountsRequiringProvisioningData;
@property(nonatomic) _Bool pending; // @synthesize pending=_pending;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasAccountsOnDeviceData;
@property(readonly, nonatomic) _Bool hasAccountsRequiringProvisioningData;
@property(nonatomic) _Bool hasPending;

@end


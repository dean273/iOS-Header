//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/HFHomeKitItemProtocol-Protocol.h>
#import <HomeUI/HFHomeVendor-Protocol.h>
#import <HomeUI/HFNamingComponentCreating-Protocol.h>
#import <HomeUI/HFServiceVendor-Protocol.h>
#import <HomeUI/NSCopying-Protocol.h>

@protocol HFCharacteristicValueSource;

@protocol HFServiceLikeItem <HFHomeKitItemProtocol, HFHomeVendor, HFServiceVendor, NSCopying, HFNamingComponentCreating>
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource;
- (id)copyWithValueSource:(id <HFCharacteristicValueSource>)arg1;
@end


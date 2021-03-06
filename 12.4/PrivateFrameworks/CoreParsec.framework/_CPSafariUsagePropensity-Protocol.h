//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary;

@protocol _CPSafariUsagePropensity <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) int totalSessions;
@property(nonatomic) int totalEngagements;
@property(nonatomic) float other;
@property(nonatomic) float competitorRecentSearch;
@property(nonatomic) float competitorCompletion;
@property(nonatomic) float competitorTopTap;
@property(nonatomic) float competitorTopGoto;
@property(nonatomic) float parsecOtherTap;
@property(nonatomic) float parsecTopTap;
@property(nonatomic) float parsecTopGoto;
@property(nonatomic) float localOtherTap;
@property(nonatomic) float localTopTap;
@property(nonatomic) float localTopGoto;
@property(nonatomic) int configuredLookbackTimeInDays;
@property(nonatomic) long long collectionEndTimestamp;
@property(nonatomic) long long collectionStartTimestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end


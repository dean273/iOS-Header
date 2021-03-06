//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsBaseDeduper.h>

#import <MapsSuggestions/MapsSuggestionsDeduper-Protocol.h>

@class NSString;

@interface MapsSuggestionsGEOMapItemDeduper : MapsSuggestionsBaseDeduper <MapsSuggestionsDeduper>
{
    long long _type;
}

+ (_Bool)isEnabled;
- (_Bool)dedupeByEnrichingEntry:(id)arg1 withEntry:(id)arg2;
- (id)initWithSacrificedType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end


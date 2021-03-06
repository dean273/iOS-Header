//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailDaemon/NSObject-Protocol.h>

@class EDSearchableIndex, EDSearchableIndexVerifier, NSDictionary, NSString;

@protocol EDSearchableIndexVerifierDataSource <NSObject>
- (EDSearchableIndex *)searchableIndexForSearchableIndexVerifier:(EDSearchableIndexVerifier *)arg1;
- (NSDictionary *)dataSamplesForSearchableIndexVerifier:(EDSearchableIndexVerifier *)arg1 searchableIndex:(EDSearchableIndex *)arg2 count:(unsigned long long)arg3;
- (NSString *)bundleIdentifierForSearchableIndexVerifier:(EDSearchableIndexVerifier *)arg1;
@end


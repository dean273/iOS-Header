//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CDDataAccessExpress/DAOofParams.h>

@class NSString;
@protocol DAOofResponseDelegate;

@interface DAOofSettingsInfo : DAOofParams
{
    NSString *_requestID;
    id <DAOofResponseDelegate> _consumer;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <DAOofResponseDelegate> consumer; // @synthesize consumer=_consumer;
@property(retain, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaStream/NSObject-Protocol.h>

@class XPCNSClientConnection, XPCNSRequest;

@protocol XPCNSClientConnectionDelegate <NSObject>
- (void)XPCNSClientConnection:(XPCNSClientConnection *)arg1 didReceiveRequest:(XPCNSRequest *)arg2;
@end


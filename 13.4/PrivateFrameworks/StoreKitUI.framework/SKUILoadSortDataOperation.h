//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUILoadResourceOperation.h>

@class SKUISortDataRequest, SSVLoadURLOperation;

__attribute__((visibility("hidden")))
@interface SKUILoadSortDataOperation : SKUILoadResourceOperation
{
    SSVLoadURLOperation *_underlyingOperation;
}

- (void).cxx_destruct;
@property __weak SSVLoadURLOperation *underlyingOperation; // @synthesize underlyingOperation=_underlyingOperation;
- (void)cancel;
- (void)main;
- (id)initWithResourceRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) SKUISortDataRequest *resourceRequest; // @dynamic resourceRequest;

@end


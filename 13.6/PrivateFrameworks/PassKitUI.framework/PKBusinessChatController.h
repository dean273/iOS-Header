//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccountStore, AKAnisetteProvisioningController;

@interface PKBusinessChatController : NSObject
{
    ACAccountStore *_accountStore;
    AKAnisetteProvisioningController *_provisioningController;
}

- (void).cxx_destruct;
- (void)_generateAuthBagWithCompletion:(CDUnknownBlockType)arg1;
- (void)openBusinessChatWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end


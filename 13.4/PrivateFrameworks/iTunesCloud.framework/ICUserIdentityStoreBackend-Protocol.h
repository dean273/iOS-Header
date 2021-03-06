//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSObject-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class ICLocalStoreAccountProperties, ICUserIdentityProperties, NSNumber;
@protocol ICUserIdentityStoreBackendDelegate;

@protocol ICUserIdentityStoreBackend <NSObject, NSCopying, NSSecureCoding>
@property(nonatomic) __weak id <ICUserIdentityStoreBackendDelegate> delegate;
- (void)verificationContextForAccountEstablishmentWithCompletion:(void (^)(ICUserVerificationContext *, NSError *))arg1;
- (void)verificationContextForDSID:(NSNumber *)arg1 completion:(void (^)(ICUserVerificationContext *, NSError *))arg2;
- (void)synchronize;
- (void)setLocalStoreAccountProperties:(ICLocalStoreAccountProperties *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (ICLocalStoreAccountProperties *)localStoreAccountPropertiesWithError:(id *)arg1;
- (void)localStoreAccountPropertiesWithCompletion:(void (^)(ICLocalStoreAccountProperties *, NSError *))arg1;
- (void)setIdentityProperties:(ICUserIdentityProperties *)arg1 forDSID:(NSNumber *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)replaceIdentityProperties:(ICUserIdentityProperties *)arg1 forDSID:(NSNumber *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)removeIdentityForDSID:(NSNumber *)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)identityPropertiesForPrimaryICloudAccountWithCompletion:(void (^)(ICUserIdentityProperties *, NSError *))arg1;
- (void)identityPropertiesForDSID:(NSNumber *)arg1 completion:(void (^)(ICUserIdentityProperties *, NSError *))arg2;
- (void)updateActiveLockerAccountDSID:(NSNumber *)arg1 completion:(void (^)(NSError *))arg2;
- (void)activeLockerAccountDSIDWithCompletion:(void (^)(NSNumber *, NSError *))arg1;
- (void)updateActiveAccountDSID:(NSNumber *)arg1 completion:(void (^)(NSError *))arg2;
- (void)activeAccountDSIDWithCompletion:(void (^)(NSNumber *, NSError *))arg1;
@end


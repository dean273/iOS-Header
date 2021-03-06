//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSString, NSUUID, NTKFace, NTKFaceConfiguration;

@protocol NTKCollectionClient <NSObject>
- (void)flushCompleteForIdentifier:(NSString *)arg1;
- (void)resetClientCollection;
- (void)upgradeFace:(NTKFace *)arg1 forUUID:(NSUUID *)arg2 seqID:(NSNumber *)arg3;
- (void)removeFaceForUUID:(NSUUID *)arg1 seqId:(NSNumber *)arg2 completion:(void (^)(void))arg3;
- (void)addFace:(NTKFace *)arg1 forUUID:(NSUUID *)arg2 seqId:(NSNumber *)arg3;
- (void)updateFaceForUUID:(NSUUID *)arg1 withResourceDirectory:(NSString *)arg2 seqId:(NSNumber *)arg3 completion:(void (^)(void))arg4;
- (void)updateFaceForUUID:(NSUUID *)arg1 withConfiguration:(NTKFaceConfiguration *)arg2 seqId:(NSNumber *)arg3;
- (void)updateOrderedFaceUUIDs:(NSArray *)arg1 seqId:(NSNumber *)arg2;
- (void)updateSelectedFaceUUID:(NSUUID *)arg1 seqId:(NSNumber *)arg2;
- (void)loadFullCollectionWithOrderedUUIDs:(NSArray *)arg1 selectedUUID:(NSUUID *)arg2 facesByUUID:(NSDictionary *)arg3 seqId:(NSNumber *)arg4 completion:(void (^)(void))arg5;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IDSFoundation/IDSCKDatabaseOperation.h>

@interface IDSCKModifyRecordsOperation : IDSCKDatabaseOperation
{
    CDUnknownBlockType _modifyRecordsCompletionBlock;
    long long _savePolicy;
}

+ (id)alloc;
+ (Class)__class;
- (void).cxx_destruct;
@property(nonatomic) long long savePolicy; // @synthesize savePolicy=_savePolicy;
@property(copy, nonatomic) CDUnknownBlockType modifyRecordsCompletionBlock; // @synthesize modifyRecordsCompletionBlock=_modifyRecordsCompletionBlock;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreKnowledge/CKKnowledgeStore.h>

@interface CKKnowledgeStore (CoreKnowledge)
- (void)disableSyncAndDeleteCloudDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)removeAllValuesAndReturnError:(id *)arg1;
- (void)removeAllValuesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)removeValuesMatching:(id)arg1 error:(id *)arg2;
- (void)removeValuesMatching:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)removeValuesForKeys:(id)arg1 error:(id *)arg2;
- (void)removeValuesForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)removeValueForKey:(id)arg1 error:(id *)arg2;
- (void)removeValueForKey:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)removeEntity:(id)arg1 error:(id *)arg2;
- (void)removeEntity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)importTriplesFromFileAtPath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)writeBatch;
@end


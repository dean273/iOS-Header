//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TCPBufferPool : NSObject
{
    int poolSize;
    struct tagBufferNode *head;
    struct tagBufferNode *tail;
    struct tagBufferNode *avail;
    int poolLock;
}

- (void)monitorBufferPool;
- (void)returnBufferToPool:(char *)arg1;
- (char *)getBufferFromPool:(int)arg1;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end


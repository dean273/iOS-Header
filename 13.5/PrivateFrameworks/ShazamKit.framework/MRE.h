//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MRE : NSObject
{
    void *_mreInstance;
}

@property(nonatomic) void *mreInstance; // @synthesize mreInstance=_mreInstance;
- (void)FillUnknownError:(id *)arg1;
- (void)ConvertException:(const struct exception *)arg1 toError:(id *)arg2;
- (void)ConvertSystemError:(const struct system_error *)arg1 toError:(id *)arg2;
- (id)search:(id)arg1 error:(id *)arg2;
- (id)metadataForSongId:(id)arg1 error:(id *)arg2;
- (id)initWithBundle:(id)arg1 cacheDir:(id)arg2 density:(long long)arg3 bufferSize:(long long)arg4 error:(id *)arg5;
- (id)initWithBundle:(id)arg1 cacheDir:(id)arg2 density:(long long)arg3 error:(id *)arg4;
- (id)initWithSignatures:(id)arg1 density:(long long)arg2 error:(id *)arg3;
- (id)initWithMREInstance:(struct MREInstance *)arg1 error:(id *)arg2;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Speech/SFSpeechRecognitionRequest.h>

@class NSURL;

@interface SFSpeechURLRecognitionRequest : SFSpeechRecognitionRequest
{
    NSURL *_URL;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (id)_startedConnectionWithLanguageCode:(id)arg1 delegate:(id)arg2 taskHint:(long long)arg3 requestIdentifier:(id)arg4;
- (id)initWithURL:(id)arg1;
- (id)init;

@end


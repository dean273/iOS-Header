//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIApplicationExtensionActivity.h>

@class WKWebView;

@interface _SFDownloadCurrentPageActivity : UIApplicationExtensionActivity
{
    WKWebView *_webView;
}

- (void).cxx_destruct;
- (void)performActivity;
- (_Bool)_presentActivityOnViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)initWithWebView:(id)arg1;

@end


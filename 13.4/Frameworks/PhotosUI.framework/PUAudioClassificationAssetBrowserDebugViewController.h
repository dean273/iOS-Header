//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUPhotosAlbumViewController.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUAudioClassificationAssetBrowserDebugViewController : PUPhotosAlbumViewController
{
    NSString *_audioClassificationName;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *audioClassificationName; // @synthesize audioClassificationName=_audioClassificationName;
- (id)_cloneAsset:(id)arg1 toDirectory:(id)arg2;
- (_Bool)_writeDiagnosticsToURL:(id)arg1 incorrectAssets:(id)arg2;
- (void)_fileRadarWithIncorrectAssets:(id)arg1;
- (void)_presentTapToRadar;
- (void)getTitle:(out id *)arg1 prompt:(out id *)arg2 shouldHideBackButton:(out _Bool *)arg3 leftBarButtonItems:(out id *)arg4 rightBarButtonItems:(out id *)arg5;
- (void)viewDidLoad;

@end


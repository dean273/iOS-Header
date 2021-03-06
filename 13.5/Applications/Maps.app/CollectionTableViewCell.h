//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKTableViewCell.h>

@class CollectionView;
@protocol CollectionHandlerInfo;

__attribute__((visibility("hidden")))
@interface CollectionTableViewCell : MKTableViewCell
{
    CollectionView *_collectionView;
    _Bool _disabled;
    _Bool _showCheckmark;
    id <CollectionHandlerInfo> _collectionInfo;
    unsigned long long _collectionViewSize;
}

+ (double)estimatedCellHeight;
+ (double)cellHeight;
+ (id)identifier;
- (void).cxx_destruct;
@property(nonatomic, getter=showsCheckmark) _Bool showCheckmark; // @synthesize showCheckmark=_showCheckmark;
@property(nonatomic) unsigned long long collectionViewSize; // @synthesize collectionViewSize=_collectionViewSize;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) id <CollectionHandlerInfo> collectionInfo; // @synthesize collectionInfo=_collectionInfo;
- (void)createContent;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end


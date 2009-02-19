/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRMediaMenuController.h>

#import "BRMenuListItemProviderProtocol.h"

@class BRMetadataPreviewController, NSArray, NSMutableArray;

@interface BRPodcastMenuController : BRMediaMenuController <BRMenuListItemProvider>
{
    NSArray *_assets;	// 108 = 0x6c
    NSMutableArray *_titlesWithUnplayedContent;	// 112 = 0x70
    BRMetadataPreviewController *_cachedPreviewController;	// 116 = 0x74
    id _collection;	// 120 = 0x78
}

- (id)initWithScene:(id)fp8 podcastCollection:(id)fp12;
- (id)initWithScene:(id)fp8;
- (void)dealloc;
- (BOOL)isVolatile;
- (id)loadModelData;
- (void)refreshControllerForModelUpdate;
- (void)setAssets:(id)fp8;
- (id)assets;
- (void)willBeExhumed;
- (void)wasPushed;
- (void)willBePopped;
- (void)itemSelected:(long)fp8;
- (id)itemForRow:(long)fp8;
- (long)itemCount;
- (id)titleForRow:(long)fp8;
- (long)rowForTitle:(id)fp8;
- (id)previewControllerForItem:(long)fp8;

@end


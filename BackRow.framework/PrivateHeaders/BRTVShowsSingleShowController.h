/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRMediaMenuController.h>

#import "BRMenuListItemProviderProtocol.h"

@class BRMetadataPreviewController, NSArray;

@interface BRTVShowsSingleShowController : BRMediaMenuController <BRMenuListItemProvider>
{
    NSArray *_episodes;	// 108 = 0x6c
    BRMetadataPreviewController *_cachedPreviewController;	// 112 = 0x70
    id _tvSeries;	// 116 = 0x74
}

- (id)initWithScene:(id)fp8 series:(id)fp12 error:(id *)fp16;
- (void)dealloc;
- (BOOL)isVolatile;
- (void)refreshControllerForModelUpdate;
- (id)loadModelData;
- (BOOL)shouldRefreshForUpdateToObject:(id)fp8;
- (void)itemSelected:(long)fp8;
- (id)itemForRow:(long)fp8;
- (long)itemCount;
- (id)titleForRow:(long)fp8;
- (long)rowForTitle:(id)fp8;
- (id)previewControllerForItem:(long)fp8;

@end


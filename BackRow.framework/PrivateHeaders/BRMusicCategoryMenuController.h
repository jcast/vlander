/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRMediaMenuController.h>

#import "BRMenuListItemProviderProtocol.h"
#import "BRMusicKeyFilterSelectionTargetProtocol.h"

@interface BRMusicCategoryMenuController : BRMediaMenuController <BRMusicKeyFilterSelectionTarget, BRMenuListItemProvider>
{
    id _allAlbumsController;	// 108 = 0x6c
}

- (id)initWithScene:(id)fp8;
- (void)dealloc;
- (BOOL)isVolatile;
- (id)loadModelData;
- (BOOL)isCurrentSelectionValidForModelData:(id)fp8;
- (void)refreshControllerForModelUpdate;
- (void)wasBuriedByPushingController:(id)fp8;
- (id)mediaProvider;
- (void)itemSelected:(long)fp8;
- (id)previewAssetsForValue:(id)fp8 ofKey:(id)fp12 forTracks:(id)fp16;
- (void)selectedValue:(id)fp8 forKey:(id)fp12 withPredicate:(id)fp16 allowShuffle:(BOOL)fp20;
- (void)allTracksSelectedWithPredicate:(id)fp8 forKey:(id)fp12 allowShuffle:(BOOL)fp16;
- (id)itemForRow:(long)fp8;
- (long)itemCount;
- (id)titleForRow:(long)fp8;
- (long)rowForTitle:(id)fp8;
- (id)previewControllerForItem:(long)fp8;
- (id)mediaPreviewMissingMediaType;

@end

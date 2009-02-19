/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRMediaMenuController.h>

@class NSArray, NSPredicate;

@interface BRVideoTracklistController : BRMediaMenuController
{
    NSArray *_tracklist;	// 108 = 0x6c
    unsigned int _hasShuffleItem:1;	// 112 = 0x70
    unsigned int _showUnplayedMark:1;	// 112 = 0x70
    NSPredicate *_predicate;	// 116 = 0x74
    NSArray *_sortDescriptors;	// 120 = 0x78
}

- (id)initWithPredicate:(id)fp8 sortDescriptors:(id)fp12 scene:(id)fp16;
- (void)dealloc;
- (BOOL)isVolatile;
- (id)loadModelData;
- (void)refreshControllerForModelUpdate;
- (BOOL)shouldRefreshForUpdateToObject:(id)fp8;
- (void)setHasShuffleOption:(BOOL)fp8;
- (void)setHasUnplayedMarkOption:(BOOL)fp8;
- (void)itemSelected:(long)fp8;
- (id)previewControllerForItem:(long)fp8;
- (id)mediaPreviewMissingMediaType;

@end


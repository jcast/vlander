/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRAssetArtLoader.h>

@interface BRAssetArtLoader (AssetManagement)
- (BOOL)_isQueuePrimed;
- (BOOL)_queueReady;
- (void)_primeQueue;
- (id)_pullNextAsset;
- (id)_pullNextAssetRandomly;
@end


/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRMediaMenuController.h>

#import "BRMenuListItemProviderProtocol.h"

@class NSArray;

@interface BRMusicStoreMenuController : BRMediaMenuController <BRMenuListItemProvider>
{
    NSArray *_assets;	// 108 = 0x6c
    NSArray *_collections;	// 112 = 0x70
}

+ (id)musicStoreMenuWithCollections:(id)fp8 assets:(id)fp12;
- (void)dealloc;
- (long)itemCount;
- (id)itemForRow:(long)fp8;
- (void)itemSelected:(long)fp8;
- (id)titleForRow:(long)fp8;
- (long)rowForTitle:(id)fp8;

@end


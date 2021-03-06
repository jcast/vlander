/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRMediaMenuController.h>

#import "BRMenuListItemProviderProtocol.h"

@class BRIconPreviewController, BRSettingsFacade, NSArray;

@interface BRSlideshowSettingsTimePerSlideController : BRMediaMenuController <BRMenuListItemProvider>
{
    BRSettingsFacade *_settingsFacade;	// 108 = 0x6c
    NSArray *_transitionNames;	// 112 = 0x70
    long _currentSavedSelection;	// 116 = 0x74
    BRIconPreviewController *_slideshowSettingsIconController;	// 120 = 0x78
}

- (id)initWithScene:(id)fp8;
- (void)dealloc;
- (long)defaultIndex;
- (void)itemSelected:(long)fp8;
- (id)itemForRow:(long)fp8;
- (long)itemCount;
- (id)titleForRow:(long)fp8;
- (long)rowForTitle:(id)fp8;
- (id)previewControllerForItem:(long)fp8;

@end


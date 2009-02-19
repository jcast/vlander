/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRMediaMenuController.h>

#import "BRMenuListItemProviderProtocol.h"

@class BRIconPreviewController, BRSettingsFacade;

@interface BRSlideshowSettingsController : BRMediaMenuController <BRMenuListItemProvider>
{
    BRSettingsFacade *_settingsFacade;	// 108 = 0x6c
    BRIconPreviewController *_slideshowSettingsIconController;	// 112 = 0x70
}

- (id)initWithScene:(id)fp8;
- (void)dealloc;
- (void)itemSelected:(long)fp8;
- (id)itemForRow:(long)fp8;
- (long)itemCount;
- (id)titleForRow:(long)fp8;
- (long)rowForTitle:(id)fp8;
- (id)previewControllerForItem:(long)fp8;

@end


/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRCenteredMenuController.h>

#import "BRMenuListItemProviderProtocol.h"

@class BRBackgroundLayer, BRLayerController, NSArray;

@interface BRInitialBlackScreenRecoveryController : BRCenteredMenuController <BRMenuListItemProvider>
{
    BRLayerController *_controllerToPopTo;	// 136 = 0x88
    BRBackgroundLayer *_background;	// 140 = 0x8c
    NSArray *_listOfResolutionsToTry;	// 144 = 0x90
}

+ (id)controllerForChoosingTVResolutionForScene:(id)fp8 withPopToController:(id)fp12;
- (id)initWithScene:(id)fp8;
- (void)dealloc;
- (void)resetLayout;
- (void)wasPushed;
- (void)wasPopped;
- (void)wasBuriedByPushingController:(id)fp8;
- (void)wasExhumedByPoppingController:(id)fp8;
- (BOOL)brEventAction:(id)fp8;
- (void)itemSelected:(long)fp8;
- (long)defaultIndex;
- (id)itemForRow:(long)fp8;
- (long)itemCount;
- (id)titleForRow:(long)fp8;
- (long)rowForTitle:(id)fp8;

@end

/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRLayerController.h>

@class BRRenderLayer, NSString;

@interface BRITunesPairingController : BRLayerController
{
    BRRenderLayer *_pairingLayer;	// 24 = 0x18
    NSString *_pin;	// 28 = 0x1c
    NSString *_startNotificationName;	// 32 = 0x20
    NSString *_stopNotificationName;	// 36 = 0x24
    BOOL _pairingHappenedWhileBuried;	// 40 = 0x28
}

+ (id)iTunesPairingControllerForInitialSyncWithScene:(id)fp8;
+ (id)iTunesPairingControllerForSyncWithScene:(id)fp8;
+ (id)iTunesPairingControllerForChangingSyncHostWithScene:(id)fp8;
+ (id)iTunesPairingControllerForStreamingWithScene:(id)fp8;
- (void)dealloc;
- (void)willBePushed;
- (void)wasPushed;
- (void)willBePopped;
- (void)wasPopped;
- (void)wasExhumedByPoppingController:(id)fp8;
- (BOOL)brEventAction:(id)fp8;

@end


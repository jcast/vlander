/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRTextWithSpinnerController.h>

@class BRLayerController, BRMediaPlayer;

@interface BRDRMSyncWaitDialog : BRTextWithSpinnerController
{
    unsigned int _timerSatisfied:1;	// 29 = 0x1d
    unsigned int _waitingForExistingSyncToComplete:1;	// 29 = 0x1d
    BRLayerController *_layerController;	// 32 = 0x20
    BRMediaPlayer *_player;	// 36 = 0x24
}

- (id)initWithScene:(id)fp8 layerController:(id)fp12;
- (id)initWithScene:(id)fp8 layerController:(id)fp12 player:(id)fp16;
- (void)dealloc;
- (BOOL)brEventAction:(id)fp8;
- (void)willBePushed;
- (void)willBePopped;

@end


/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRLayerController.h>

@class BRBlackFadeoutLayer, NSTimer;

@interface BRLowPowerBlackoutScreenController : BRLayerController
{
    BRBlackFadeoutLayer *_fadeoutLayer;	// 24 = 0x18
    NSTimer *_timer;	// 28 = 0x1c
}

- (id)initWithScene:(id)fp8;
- (void)dealloc;
- (void)willBePushed;
- (void)wasPushed;
- (void)willBePopped;
- (void)wasPopped;
- (BOOL)brEventAction:(id)fp8;

@end

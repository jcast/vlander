/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRMediaPlayerController.h>

@class BRBlackFadeoutLayer, BRImageLayer, BRListControl, BRQuadLayer, BRTransportControl, BRVideoPlayer, BRVideoPlayerHostLayer, NSArray, NSDictionary, NSMutableDictionary, NSTimer;

@interface BRVideoPlayerController : BRMediaPlayerController
{
    BRVideoPlayer *_player;	// 24 = 0x18
    BRVideoPlayerHostLayer *_host;	// 28 = 0x1c
    BRBlackFadeoutLayer *_fade;	// 32 = 0x20
    BRQuadLayer *_blurFadeBackground;	// 36 = 0x24
    BRImageLayer *_blurredFrame;	// 40 = 0x28
    BRListControl *_resumeMenu;	// 44 = 0x2c
    BRTransportControl *_transport;	// 48 = 0x30
    NSArray *_savedLayers;	// 52 = 0x34
    NSDictionary *_committedCCLayers;	// 56 = 0x38
    NSMutableDictionary *_nextCCLayers;	// 60 = 0x3c
    NSTimer *_suppressBackgroundProcessTimer;	// 64 = 0x40
    unsigned int _allowsResume:1;	// 68 = 0x44
    unsigned int _drmSyncAttempted:1;	// 68 = 0x44
    unsigned int _transportInhibited:1;	// 68 = 0x44
}

- (void)dealloc;
- (void)resetLayout;
- (void)setVideoPlayer:(id)fp8;
- (id)videoPlayer;
- (id)player;
- (void)setAllowsResume:(BOOL)fp8;
- (BOOL)allowsResume;
- (void)setTransportControlInhibited:(BOOL)fp8;
- (BOOL)transportControlInhibited;
- (void)willBePushed;
- (void)wasPushed;
- (void)willBePopped;
- (void)wasPopped;
- (void)wasBuriedByPushingController:(id)fp8;
- (void)willBeBuried;
- (void)wasExhumedByPoppingController:(id)fp8;
- (void)willBeExhumed;
- (id)popAnimation;
- (id)pushAnimation;
- (id)exhumeAnimationWithPoppingController:(id)fp8;
- (id)buryAnimationWithPushingController:(id)fp8;

@end

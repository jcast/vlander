/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRRenderLayer.h>

@class BRVideoHardwarePostprocessor, BRVideoPlayer, BRVideoPlayerStatisticsLayer;

@interface BRVideoPlayerHostLayer : BRRenderLayer
{
    BRVideoPlayer *_player;	// 56 = 0x38
    struct _NSRect _renderFrame;	// 60 = 0x3c
    unsigned long long _currentFrameTime;	// 76 = 0x4c
    struct __CVBuffer *_currentFrame;	// 84 = 0x54
    unsigned int _blankingList;	// 88 = 0x58
    BRRenderLayer *_ccLayer;	// 92 = 0x5c
    BRRenderLayer *_transportLayer;	// 96 = 0x60
    BRVideoPlayerStatisticsLayer *_stats;	// 100 = 0x64
    BRVideoHardwarePostprocessor *_postProcessor;	// 104 = 0x68
}

- (id)initWithScene:(id)fp8;
- (void)dealloc;
- (void)setFrame:(struct _NSRect)fp8;
- (void)setPlayer:(id)fp8;
- (id)player;
- (void)setClosedCaptioningLayer:(id)fp8;
- (id)closedCaptioningLayer;
- (void)setTransportLayer:(id)fp8;
- (id)transportLayer;
- (BOOL)updateFrameForTime:(const CVTimeStamp *)fp8;
- (void)renderLayer;
- (id)blurredVideoFrame;

@end

/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRVideoPlayer.h>

@class BRVideo, BRVideoPlayerStateMachine, NSTimer;

@interface BRQTKitVideoPlayer : BRVideoPlayer
{
    BRVideo *_video;	// 24 = 0x18
    float _aspectRatio;	// 28 = 0x1c
    NSTimer *_rateTimer;	// 32 = 0x20
    double _virtualChapterMark;	// 36 = 0x24
    double _virtualChapterMarkExpiration;	// 44 = 0x2c
    BRVideoPlayerStateMachine *_stateMachine;	// 52 = 0x34
    unsigned int _showFrames:1;	// 56 = 0x38
    unsigned int _gatherStats:1;	// 56 = 0x38
    unsigned int _muted:1;	// 56 = 0x38
}

- (id)init;
- (void)dealloc;
- (BOOL)prerollMedia:(id *)fp8;
- (int)playerState;
- (float)bufferingProgress;
- (struct BRVideoTimeRange)bufferedRange;
- (float)elapsedPlaybackTime;
- (void)setElapsedPlaybackTime:(float)fp8;
- (double)trackDuration;
- (float)aspectRatio;
- (id)currentChapterTitle;
- (void)setMuted:(BOOL)fp8;
- (BOOL)muted;
- (void)setCaptionsEnabled:(BOOL)fp8;
- (void)setMovieLoops:(BOOL)fp8;
- (BOOL)setMedia:(id)fp8 error:(id *)fp12;
- (BOOL)initiatePlayback:(id *)fp8;
- (void)play;
- (void)stop;
- (void)pause;
- (void)pressAndHoldLeftArrow;
- (void)pressAndHoldRightArrow;
- (void)rightArrowClick;
- (void)leftArrowClick;
- (void)resume;
- (void)setPlaybackContext:(id)fp8;
- (void)setContextSizeHint:(struct _NSSize)fp8;
- (BOOL)newFrameForTime:(const CVTimeStamp *)fp8 frame:(struct __CVBuffer **)fp12;
- (struct __CVBuffer *)currentFrame;

@end

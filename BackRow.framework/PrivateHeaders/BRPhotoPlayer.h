/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRMediaPlayer.h>

@class BRIPhotoMediaCollection, BRMusicPlayer, BRRenderContext, BRSettingsFacade, NSArray, NSTimer, PhotoConnection;

@interface BRPhotoPlayer : BRMediaPlayer
{
    BRRenderContext *_renderContext;	// 8 = 0x8
    double _timeFreq;	// 12 = 0xc
    double _prevTime;	// 20 = 0x14
    BRIPhotoMediaCollection *_collection;	// 28 = 0x1c
    struct _NSSize _contextSizeHint;	// 32 = 0x20
    int _state;	// 40 = 0x28
    BOOL _suppressMusic;	// 44 = 0x2c
    BRMusicPlayer *_musicPlayer;	// 48 = 0x30
    NSArray *_musicTracksToPlay;	// 52 = 0x34
    int _currentTrack;	// 56 = 0x38
    id _savedPlaylist;	// 60 = 0x3c
    BRSettingsFacade *_settingsFacade;	// 64 = 0x40
    NSTimer *_userActivityTimer;	// 68 = 0x44
    PhotoConnection *_photoConnection;	// 72 = 0x48
    id _mediaMusicProvider;	// 76 = 0x4c
    id _mediaPhotoProvider;	// 80 = 0x50
}

- (id)init;
- (void)dealloc;
- (id)mediaMusicProvider;
- (id)mediaPhotoProvider;
- (void)setPlaybackContext:(id)fp8;
- (id)playbackContext;
- (void)setMediaCollection:(id)fp8 error:(id *)fp12;
- (id)collection;
- (void)suppressMusic:(BOOL)fp8;
- (void)setContextSizeHint:(struct _NSSize)fp8;
- (BOOL)newFrameTextureInfoForTime:(const CVTimeStamp *)fp8 frameTexture:(id *)fp12;
- (BOOL)initiatePlayback:(id *)fp8;
- (void)play;
- (void)pause;
- (void)stop;
- (void)resume;
- (void)leftArrowClick;
- (void)rightArrowClick;
- (int)playerState;

@end

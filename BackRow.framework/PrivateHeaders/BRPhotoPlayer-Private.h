/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRPhotoPlayer.h>

@interface BRPhotoPlayer (Private)
- (id)_photoConnection;
- (id)_slideShowDictionaryForCollection;
- (id)_musicPlayer;
- (BOOL)_okToPlayMusic;
- (BOOL)_playMusicShuffled;
- (BOOL)_repeatMusic;
- (id)_currentTrackList;
- (void)_photoSlideshowDidStart;
- (void)_photoSlideshowDidEnd:(id)fp8;
- (void)_photoSlideshowDidEndMainThread;
- (void)_stopMusicPlayback;
- (id)_trackListForSongID:(id)fp8 error:(id *)fp12;
- (id)_trackListForPlaylistID:(id)fp8 error:(id *)fp12;
- (id)_trackListForPlaylistName:(id)fp8 error:(id *)fp12;
- (id)_trackListForAllSongs;
- (BOOL)_startPlayingTrackList:(id)fp8 error:(id *)fp12;
- (void)_updateUserActivity:(id)fp8;
- (void)_startActivityTimer;
@end


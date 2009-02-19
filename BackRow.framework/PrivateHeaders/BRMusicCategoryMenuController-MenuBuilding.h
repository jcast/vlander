/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRMusicCategoryMenuController.h>

@interface BRMusicCategoryMenuController (MenuBuilding)
- (id)_buildMusicVideosMenu;
- (id)_buildPlaylistMenu;
- (id)_buildSonglistMenu;
- (id)_buildAudiobookMenu;
- (id)_buildAlbumTrackMenuWithPredicate:(id)fp8 sortDescriptors:(id)fp12 title:(id)fp16 includeShuffle:(BOOL)fp20;
- (id)_buildSearchKeyMenuForKey:(id)fp8 withPredicate:(id)fp12 ignoringPrefixes:(BOOL)fp16 title:(id)fp20 includeShuffle:(BOOL)fp24;
- (id)_audioTrackMenuForKey:(id)fp8 ignoringPrefixes:(BOOL)fp12 titled:(id)fp16;
- (id)_menuTitleForValue:(id)fp8 ofKey:(id)fp12;
- (BOOL)_isMusicVideoPredicate:(id)fp8;
@end


/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRCoverArtPreviewController.h>

@interface BRCoverArtPreviewController (Private)
- (struct _NSRect)_frameFor:(id)fp8;
- (void)_loadImage:(struct CGImage *)fp8 into:(id)fp12;
- (void)_crossFadeToNextImage:(id)fp8;
- (void)_cleanupTimer;
- (void)_crossfadeComplete:(id)fp8;
- (void)_scheduleTimerOnMainThread;
- (void)_updateCoverArt:(id)fp8;
@end

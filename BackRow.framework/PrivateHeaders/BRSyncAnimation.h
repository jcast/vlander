/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRAnimation.h>

@class BRImageLayer;

@interface BRSyncAnimation : BRAnimation
{
    BRImageLayer *_syncAnimationLayer;	// 60 = 0x3c
}

+ (void)runAnimationInLayer:(id)fp8;
- (id)initInLayer:(id)fp8;
- (void)dealloc;
- (void)positionChanged:(float)fp8;

@end


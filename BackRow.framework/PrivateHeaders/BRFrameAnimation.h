/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRAnimation.h>

@class BRRenderLayer;

@interface BRFrameAnimation : BRAnimation
{
    struct _NSRect _targetFrame;	// 60 = 0x3c
    struct _NSRect _startFrame;	// 76 = 0x4c
    BRRenderLayer *_renderLayer;	// 92 = 0x5c
}

- (void)dealloc;
- (void)setRenderLayer:(id)fp8;
- (id)renderLayer;
- (void)setTargetFrame:(struct _NSRect)fp8;
- (void)positionChanged:(float)fp8;

@end


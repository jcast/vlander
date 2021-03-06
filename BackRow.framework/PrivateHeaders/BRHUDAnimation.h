/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRValueAnimation.h>

@class BRRenderLayer;

@interface BRHUDAnimation : BRValueAnimation
{
    BRRenderLayer *_hostLayer;	// 100 = 0x64
    BRRenderLayer *_backgroundLayer;	// 104 = 0x68
    BRRenderLayer *_animationLayer;	// 108 = 0x6c
}

- (id)initWithHostLayer:(id)fp8;
- (void)dealloc;
- (void)setBackgroundLayer:(id)fp8;
- (void)setAnimationLayer:(id)fp8;
- (void)positionChanged:(float)fp8;

@end


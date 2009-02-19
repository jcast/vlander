/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRRenderLayer.h>

@class BRImageLayer, BRMediaParadeProvider;

@interface BRMediaParadeLayer : BRRenderLayer
{
    float _framePos;	// 56 = 0x38
    BRImageLayer *_blankImage;	// 60 = 0x3c
    BRMediaParadeProvider *_provider;	// 64 = 0x40
}

- (id)initWithScene:(id)fp8;
- (void)dealloc;
- (void)setFrame:(struct _NSRect)fp8;
- (void)setAlphaValue:(float)fp8;
- (void)setProvider:(id)fp8;
- (id)provider;
- (long)advanceImages:(float)fp8;
- (void)resetAdvancement;
- (void)primeImagePump;

@end


/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRRenderLayer.h>

@interface BRCoreGraphicsLayer : BRRenderLayer
{
    unsigned int _textureID;	// 56 = 0x38
}

- (id)initWithScene:(id)fp8;
- (void)dealloc;
- (void)renderInContext:(struct CGContext *)fp8;
- (void)setFrame:(struct _NSRect)fp8;
- (void)setNeedsDisplay:(BOOL)fp8;
- (void)renderLayer;

@end


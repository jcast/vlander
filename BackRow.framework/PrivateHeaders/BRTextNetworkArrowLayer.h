/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRRenderLayer.h>

#import "BRHighlightableProtocol.h"

@class BRBitmapTexture, BRTextArrowLayer;

@interface BRTextNetworkArrowLayer : BRRenderLayer <BRHighlightable>
{
    BRBitmapTexture *_texture;	// 56 = 0x38
    BRTextArrowLayer *_textArrow;	// 60 = 0x3c
}

- (id)initWithScene:(id)fp8;
- (void)dealloc;
- (void)setFrame:(struct _NSRect)fp8;
- (void)renderLayer;
- (void)setHighlighted:(BOOL)fp8;
- (BOOL)highlighted;

@end


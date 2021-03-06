/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRRenderLayer.h>

#import "BRHighlightableProtocol.h"

@class BRTexture;

@interface BRTextArrowLayer : BRRenderLayer <BRHighlightable>
{
    BRTexture *_unhighlightedTexture;	// 56 = 0x38
    BRTexture *_highlightedTexture;	// 60 = 0x3c
    BRTexture *_curTexture;	// 64 = 0x40
}

- (id)initWithScene:(id)fp8;
- (void)dealloc;
- (void)setHighlighted:(BOOL)fp8;
- (BOOL)highlighted;
- (void)renderLayer;

@end


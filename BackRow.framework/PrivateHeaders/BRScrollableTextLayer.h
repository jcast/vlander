/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRRenderLayer.h>

@class NSAttributedString, NSData;

@interface BRScrollableTextLayer : BRRenderLayer
{
    float _scrollRepeatInterval;	// 56 = 0x38
    float _scrollPosition;	// 60 = 0x3c
    struct _NSPoint _layerTranslation;	// 64 = 0x40
    NSAttributedString *_stringRef;	// 72 = 0x48
    NSData *_textureData;	// 76 = 0x4c
    struct _NSSize _naturalSize;	// 80 = 0x50
    unsigned int _lineList;	// 88 = 0x58
    unsigned int _tileCount;	// 92 = 0x5c
    unsigned int *_tileTextures;	// 96 = 0x60
    unsigned int *_tileWidths;	// 100 = 0x64
    unsigned int _tileHeight;	// 104 = 0x68
    unsigned int _allowScroll:1;	// 108 = 0x6c
}

- (void)dealloc;
- (BOOL)clipsToFrame;
- (void)setAttributedString:(id)fp8;
- (id)attributedString;
- (struct _NSSize)pixelBounds;
- (BOOL)needsScrolling;
- (void)setAllowScroll:(BOOL)fp8;
- (BOOL)allowScroll;
- (void)setRepeatInterval:(float)fp8;
- (float)repeatInterval;
- (void)setScrollPosition:(float)fp8;
- (float)scrollPosition;
- (float)maxScrollPosition;
- (void)setLayerTranslation:(struct _NSPoint)fp8;
- (struct _NSPoint)layerTranslation;
- (void)renderLayer;

@end


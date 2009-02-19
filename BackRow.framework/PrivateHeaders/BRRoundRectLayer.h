/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRRenderLayer.h>

@class BRBitmapTexture;

@interface BRRoundRectLayer : BRRenderLayer
{
    BRBitmapTexture *_corner;	// 56 = 0x38
    float _cornerRadius;	// 60 = 0x3c
    float _rgba[3];	// 64 = 0x40
}

- (id)initWithScene:(id)fp8;
- (void)dealloc;
- (void)setFrame:(struct _NSRect)fp8;
- (void)setCornerRadius:(float)fp8;
- (struct _NSRect)frameForContentFrame:(struct _NSRect)fp8;
- (struct _NSRect)contentFrame;
- (void)setRedColor:(float)fp8 greenColor:(float)fp12 blueColor:(float)fp16;
- (void)renderLayer;

@end

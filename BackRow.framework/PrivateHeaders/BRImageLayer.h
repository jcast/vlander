/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRRenderLayer.h>

@class BRTexture;

@interface BRImageLayer : BRRenderLayer
{
    BRTexture *_texture;	// 56 = 0x38
    float _reflectionAmount;	// 60 = 0x3c
    float _reflectionOffset;	// 64 = 0x40
    float _yRotation;	// 68 = 0x44
    unsigned int _disableBlend:1;	// 72 = 0x48
}

- (void)dealloc;
- (void)setImage:(struct CGImage *)fp8;
- (void)setImage:(struct CGImage *)fp8 downsampleTo:(struct _NSSize)fp12;
- (void)setTexture:(id)fp8;
- (id)texture;
- (void)setReflectionAmount:(float)fp8;
- (float)reflectionAmount;
- (void)setReflectionOffset:(float)fp8;
- (float)reflectionOffset;
- (void)setDisableBlending:(BOOL)fp8;
- (BOOL)disableBlending;
- (void)setYRotation:(float)fp8;
- (float)yRotation;
- (struct _NSSize)pixelBounds;
- (void)renderLayer;

@end

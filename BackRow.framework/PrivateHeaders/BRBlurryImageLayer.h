/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRRenderLayer.h>

#import "NSCopyingProtocol.h"

@class BRTexture;

@interface BRBlurryImageLayer : BRRenderLayer <NSCopying>
{
    float _crossfade;	// 56 = 0x38
    float _reflectionOffset;	// 60 = 0x3c
    float _reflectionSeparation;	// 64 = 0x40
    BRTexture *_lucidTexture;	// 68 = 0x44
    BRTexture *_lucidTextureReflection;	// 72 = 0x48
    unsigned int _flipLucid:1;	// 76 = 0x4c
    BRTexture *_blurTexture;	// 80 = 0x50
    BRTexture *_blurTextureReflection;	// 84 = 0x54
    unsigned int _flipBlur:1;	// 88 = 0x58
}

+ (id)blurredImageForImage:(struct CGImage *)fp8 inContext:(id)fp12 size:(struct _NSSize)fp16;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)fp8;
- (void)setLucidImage:(id)fp8 withReflection:(id)fp12;
- (void)setBlurryImage:(id)fp8 withReflection:(id)fp12;
- (void)setCrossfade:(float)fp8;
- (float)crossfade;
- (void)setReflectionOffset:(float)fp8;
- (float)reflectionOffset;
- (void)setReflectionSeparation:(float)fp8;
- (float)reflectionSeparation;
- (id)lucidTexture;
- (void)renderLayer;

@end


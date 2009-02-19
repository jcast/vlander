/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRTexture.h>

@class BRRenderContext, NSData;

@interface BRBitmapTexture : BRTexture
{
    struct BRTextureInfo _textureInfo;	// 4 = 0x4
    struct BRBitmapDataInfo _dataInfo;	// 52 = 0x34
    BRRenderContext *_context;	// 72 = 0x48
    NSData *_bitmapData;	// 76 = 0x4c
}

+ (id)textureWithImage:(struct CGImage *)fp8 context:(id)fp12 mipmap:(BOOL)fp16;
+ (id)textureWithImage:(struct CGImage *)fp8 context:(id)fp12 mipmap:(BOOL)fp16 downsampleTo:(struct _NSSize)fp20;
+ (id)textureWithCIImage:(id)fp8 context:(id)fp12 mipmap:(BOOL)fp16;
+ (id)textureWithCIImage:(id)fp8 context:(id)fp12 mipmap:(BOOL)fp16 downsampleTo:(struct _NSSize)fp20;
- (id)initWithBitmapData:(id)fp8 bitmapInfo:(const struct BRBitmapDataInfo *)fp12 context:(id)fp16 mipmap:(BOOL)fp20;
- (void)dealloc;
- (const struct BRTextureInfo *)textureInfo;
- (const struct BRBitmapDataInfo *)bitmapInfo;
- (id)bitmapData;

@end


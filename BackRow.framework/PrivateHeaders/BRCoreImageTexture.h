/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRTexture.h>

@class BRRenderContext;

@interface BRCoreImageTexture : BRTexture
{
    struct BRTextureInfo _info;	// 4 = 0x4
    BRRenderContext *_context;	// 52 = 0x34
    struct _CGLPBufferObject *_buffer;	// 56 = 0x38
}

- (id)initWithCIImage:(id)fp8 context:(id)fp12;
- (void)dealloc;
- (const struct BRTextureInfo *)textureInfo;

@end


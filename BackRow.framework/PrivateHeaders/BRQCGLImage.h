/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Quartz/Quartz.h>

@class BRTexture;

@interface BRQCGLImage : QCGLTextureImage
{
    BRTexture *_texture;	// 280 = 0x118
}

+ (id)imageWithTexture:(id)fp8;
- (id)initWithTexture:(id)fp8;
- (void)dealloc;

@end

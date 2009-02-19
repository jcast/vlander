/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRControl.h>

@class BRImageLayer;

@interface BRImageControl : BRControl
{
    BRImageLayer *_layer;	// 8 = 0x8
}

- (id)initWithScene:(id)fp8;
- (void)dealloc;
- (id)layer;
- (struct _NSSize)pixelBounds;
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
- (void)setBoundingSize:(struct _NSSize)fp8;

@end

/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRRenderLayer.h>

@interface BRDividerLayer : BRRenderLayer
{
    float _lineStart;	// 56 = 0x38
    float _lineEnd;	// 60 = 0x3c
    float _lineThickness;	// 64 = 0x40
    float _verticalPosition;	// 68 = 0x44
}

- (id)initWithScene:(id)fp8;
- (void)setVerticalPosition:(float)fp8;
- (void)setFrame:(struct _NSRect)fp8;
- (void)renderLayer;

@end


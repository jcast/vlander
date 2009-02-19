/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRCoreGraphicsLayer.h>

@interface BRProgressBarLayer : BRCoreGraphicsLayer
{
    double _maxValue;	// 60 = 0x3c
    double _value;	// 68 = 0x44
    double _fillPercent;	// 76 = 0x4c
}

- (float)inset;
- (void)renderInContext:(struct CGContext *)fp8;
- (double)maxValue;
- (double)value;
- (void)setValue:(double)fp8 maxValue:(double)fp16;

@end


/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRHorizontalSegmentedWidget.h>

@class BRImageLayer;

@interface BRProgressBarWidget : BRHorizontalSegmentedWidget
{
    BRImageLayer *_centerEndCapLayer;	// 68 = 0x44
    BRImageLayer *_centerOnLayer;	// 72 = 0x48
    float _percentage;	// 76 = 0x4c
}

- (id)initWithScene:(id)fp8;
- (void)dealloc;
- (float)percentage;
- (void)setPercentage:(float)fp8;

@end

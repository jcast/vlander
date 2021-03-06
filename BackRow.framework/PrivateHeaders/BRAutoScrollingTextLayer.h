/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRScrollableTextLayer.h>

#import "BRRenderLayerEffectsDelegateProtocol.h"

@interface BRAutoScrollingTextLayer : BRScrollableTextLayer <BRRenderLayerEffectsDelegate>
{
    double _timeFreq;	// 112 = 0x70
    double _prevTime;	// 120 = 0x78
    double _scrollStartTime;	// 128 = 0x80
    double _scrollDuration;	// 136 = 0x88
    float _autoScrollPosition;	// 144 = 0x90
    float _maxScrollPosition;	// 148 = 0x94
    unsigned int _delayComplete:1;	// 152 = 0x98
    BOOL _firstIterationComplete;	// 153 = 0x99
}

- (id)initWithScene:(id)fp8;
- (void)dealloc;
- (void)startScrolling;
- (void)stopScrolling;
- (BOOL)updateFrameForTime:(const CVTimeStamp *)fp8;
- (void)renderLayerTexture:(id)fp8;

@end


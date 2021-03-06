/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRRenderLayer.h>

@class NSMutableData;

@interface BRWaitSpinnerLayer : BRRenderLayer
{
    long _progressPhase;	// 56 = 0x38
    double _timeFreq;	// 60 = 0x3c
    double _prevTime;	// 68 = 0x44
    NSMutableData *_textureData;	// 76 = 0x4c
    unsigned int _textureID;	// 80 = 0x50
    int _textureSize;	// 84 = 0x54
}

- (id)initWithScene:(id)fp8;
- (void)dealloc;
- (void)setFrame:(struct _NSRect)fp8;
- (void)nextPhase;
- (void)reset;
- (void)renderLayer;
- (BOOL)updateFrameForTime:(const CVTimeStamp *)fp8;

@end


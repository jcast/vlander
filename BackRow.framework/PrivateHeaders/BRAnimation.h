/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@class BRRenderScene;

@interface BRAnimation : NSObject
{
    BRRenderScene *_scene;	// 4 = 0x4
    int _curve;	// 8 = 0x8
    double _duration;	// 12 = 0xc
    float _position;	// 20 = 0x14
    double _timeFreq;	// 24 = 0x18
    double _startTime;	// 32 = 0x20
    double _minTime;	// 40 = 0x28
    double _prevFrameTime;	// 48 = 0x30
    unsigned int _sceneWarmed:1;	// 56 = 0x38
    unsigned int _animationRunning:1;	// 56 = 0x38
    unsigned int _async:1;	// 56 = 0x38
    unsigned int _loops:1;	// 56 = 0x38
}

+ (id)animationWithScene:(id)fp8;
- (id)initWithScene:(id)fp8;
- (void)dealloc;
- (id)scene;
- (void)setAnimationCurve:(int)fp8;
- (int)curve;
- (void)setDuration:(double)fp8;
- (double)duration;
- (void)setPosition:(float)fp8;
- (float)position;
- (void)setAsynchronous:(BOOL)fp8;
- (BOOL)asynchronous;
- (void)setLoops:(BOOL)fp8;
- (BOOL)loops;
- (void)run;
- (void)stop;
- (BOOL)animationRunning;
- (void)positionChanged:(float)fp8;
- (void)setMinimumUpdateTime:(double)fp8;

@end


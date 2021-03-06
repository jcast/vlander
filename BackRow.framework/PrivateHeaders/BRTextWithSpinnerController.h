/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRLayerController.h>

@class BRWaitSpinnerControl;

@interface BRTextWithSpinnerController : BRLayerController
{
    BRWaitSpinnerControl *_spinner;	// 24 = 0x18
    BOOL _isNetworkDependent;	// 28 = 0x1c
}

- (id)initWithScene:(id)fp8 title:(id)fp12 text:(id)fp16 showBack:(BOOL)fp20;
- (id)initWithScene:(id)fp8 title:(id)fp12 text:(id)fp16 showBack:(BOOL)fp20 isNetworkDependent:(BOOL)fp24;
- (void)dealloc;
- (BOOL)isNetworkDependent;
- (void)setIcon:(id)fp8 horizontalOffset:(float)fp12 kerningFactor:(float)fp16;
- (void)showProgress:(BOOL)fp8;
- (void)willBePopped;

@end


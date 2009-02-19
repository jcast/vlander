/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRTextWithSpinnerController.h>

@class BRMediaHost;

@interface BRMediaHostConnectionDialog : BRTextWithSpinnerController
{
    BRMediaHost *_mediaHost;	// 32 = 0x20
    unsigned int _timerSatisfied:1;	// 36 = 0x24
}

- (id)initWithScene:(id)fp8 host:(id)fp12;
- (void)dealloc;
- (void)setMediaHost:(id)fp8;
- (id)mediaHost;
- (BOOL)brEventAction:(id)fp8;
- (void)willBePopped;
- (void)willBePushed;

@end

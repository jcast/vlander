/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRControl.h>

@class BRLayoutManager, BRRenderLayer, NSMutableArray;

@interface BRPanel : BRControl
{
    NSMutableArray *_controls;	// 8 = 0x8
    BRLayoutManager *_layoutManager;	// 12 = 0xc
    BRRenderLayer *_layer;	// 16 = 0x10
    BOOL _autoSizeHeight;	// 20 = 0x14
}

- (id)initWithScene:(id)fp8;
- (void)dealloc;
- (void)setLayoutManager:(id)fp8;
- (id)layoutManager;
- (void)addControl:(id)fp8;
- (void)removeControl:(id)fp8;
- (id)controls;
- (void)removeAllControls;
- (id)layer;
- (void)pack;
- (void)setFrame:(struct _NSRect)fp8;
- (BOOL)brEventAction:(id)fp8;
- (void)setAlphaValue:(float)fp8;
- (void)setAutoSizeHeight:(BOOL)fp8;

@end

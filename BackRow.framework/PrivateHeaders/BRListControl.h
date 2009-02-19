/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRControl.h>

@class BRMenuListLayer;

@interface BRListControl : BRControl
{
    BRMenuListLayer *_list;	// 8 = 0x8
    long _scrollTarget;	// 12 = 0xc
    long _scrollStart;	// 16 = 0x10
    double _scrollRateMin;	// 20 = 0x14
    double _scrollRate;	// 28 = 0x1c
    double _scrollRamp;	// 36 = 0x24
    double _prevTime;	// 44 = 0x2c
    double _timeFreq;	// 52 = 0x34
    double _startTime;	// 60 = 0x3c
    double _currentRate;	// 68 = 0x44
    double _lastActivityUpdate;	// 76 = 0x4c
    long _direction;	// 84 = 0x54
    BOOL _changedDirectionWhileScrolling;	// 88 = 0x58
    unsigned int _inScroll:1;	// 89 = 0x59
    unsigned int _stopScroll:1;	// 89 = 0x59
    unsigned int _keyupReceived:1;	// 89 = 0x59
    unsigned int _scrollUnbounded:1;	// 89 = 0x59
    unsigned int _slowDown:1;	// 89 = 0x59
    unsigned int _active:1;	// 89 = 0x59
    unsigned int _smoothScroll:1;	// 89 = 0x59
}

- (id)initWithScene:(id)fp8;
- (void)dealloc;
- (id)layer;
- (void)setDatasource:(id)fp8;
- (id)datasource;
- (void)setSelection:(double)fp8;
- (double)selection;
- (void)setDividerIndex:(long)fp8;
- (void)addDividerAtIndex:(long)fp8;
- (void)removeDividerAtIndex:(long)fp8;
- (void)stopScrolling;
- (void)reload;
- (long)maximumVisibleItemsForListHeight:(float)fp8;
- (float)minimumRowHeightForVisibleItems:(long)fp8;
- (void)setRowHeight:(float)fp8;
- (BOOL)brEventAction:(id)fp8;
- (struct _NSRect)listTextFrame;
- (void)willBeDeactivated;
- (void)willBeReactivated;

@end

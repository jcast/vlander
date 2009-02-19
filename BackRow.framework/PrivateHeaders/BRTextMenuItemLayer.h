/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRRenderLayer.h>

#import "BRMenuItemLayerProtocol.h"

@class BRAutoScrollingTextLayer, BRTextLayer, BRWaitSpinnerControl, NSArray;

@interface BRTextMenuItemLayer : BRRenderLayer <BRMenuItemLayer>
{
    BRTextLayer *_textLine;	// 56 = 0x38
    BRAutoScrollingTextLayer *_scrollingLine;	// 60 = 0x3c
    BRTextLayer *_rightJustifiedTextLayer;	// 64 = 0x40
    NSArray *_tabStops;	// 68 = 0x44
    struct _NSSize _textBounds;	// 72 = 0x48
    struct _NSSize _rightJustifiedTextBounds;	// 80 = 0x50
    BOOL _rightTextShouldHighlight;	// 88 = 0x58
    BRRenderLayer *_arrow;	// 92 = 0x5c
    BRWaitSpinnerControl *_spinner;	// 96 = 0x60
    unsigned int _disableArrow:1;	// 100 = 0x64
    unsigned int _highlighted:1;	// 100 = 0x64
    unsigned int _menuTextCentered:1;	// 100 = 0x64
    float _textIconWidth;	// 104 = 0x68
}

+ (id)folderMenuItemWithScene:(id)fp8;
+ (id)networkMenuItemWithScene:(id)fp8;
+ (id)menuItemWithScene:(id)fp8;
+ (id)progressMenuItemWithScene:(id)fp8;
+ (id)progressFolderItemWithScene:(id)fp8;
- (id)initWithScene:(id)fp8;
- (id)icon;
- (struct _NSSize)iconSize;
- (struct _NSSize)spinnerSize;
- (void)dealloc;
- (void)setAlphaValue:(float)fp8;
- (void)setTitle:(id)fp8 centered:(BOOL)fp12;
- (void)setTitle:(id)fp8;
- (id)title;
- (void)setRightJustifiedText:(id)fp8;
- (void)setRightJustifiedText:(id)fp8 attributes:(id)fp12;
- (id)rightJustifiedText;
- (void)setRightTextShouldHighlight:(BOOL)fp8;
- (BOOL)rightTextShouldHighlight;
- (void)setFrame:(struct _NSRect)fp8;
- (void)setArrowDisabled:(BOOL)fp8;
- (BOOL)arrowDisabled;
- (void)setTabStops:(id)fp8;
- (void)setWaitSpinnerActive:(BOOL)fp8;
- (void)highlight;
- (void)unHighlight;
- (void)scrollItemIfNecessary;
- (void)stopScrollingItem;
- (void)setTextIconWidth:(float)fp8;
- (struct _NSSize)renderedSize;

@end

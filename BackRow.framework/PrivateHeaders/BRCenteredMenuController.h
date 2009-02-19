/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRMenuController.h>

@class BRGoBackControl, BRHeaderControl, BRTextControl, BRTexture, NSDictionary, NSString;

@interface BRCenteredMenuController : BRMenuController
{
    NSString *_title;	// 64 = 0x40
    BRTexture *_icon;	// 68 = 0x44
    float _iconOffset;	// 72 = 0x48
    float _iconKernFactor;	// 76 = 0x4c
    BRHeaderControl *_header;	// 80 = 0x50
    BRTextControl *_primaryTextControl;	// 84 = 0x54
    BRTextControl *_secondaryTextControl;	// 88 = 0x58
    BRTextControl *_labelControl;	// 92 = 0x5c
    BRGoBackControl *_back;	// 96 = 0x60
    NSString *_primaryInfoText;	// 100 = 0x64
    NSDictionary *_primaryInfoTextAttributes;	// 104 = 0x68
    NSString *_secondaryInfoText;	// 108 = 0x6c
    NSDictionary *_secondaryInfoTextAttributes;	// 112 = 0x70
    NSString *_label;	// 116 = 0x74
    NSDictionary *_labelAttributes;	// 120 = 0x78
    BOOL _hasGoBackControl;	// 124 = 0x7c
    float _listHeightAdjustment;	// 128 = 0x80
    float _defaultMenuWidth;	// 132 = 0x84
}

- (void)dealloc;
- (void)resetLayout;
- (void)setTitle:(id)fp8;
- (void)setIcon:(id)fp8 horizontalOffset:(float)fp12 kerningFactor:(float)fp16;
- (void)setPrimaryInfoText:(id)fp8;
- (void)setPrimaryInfoTextAttributes:(id)fp8;
- (void)setSecondaryInfoText:(id)fp8;
- (void)setSecondaryInfoTextAttributes:(id)fp8;
- (BOOL)hasGoBackControl;
- (void)setHasGoBackControl:(BOOL)fp8;
- (void)setLabel:(id)fp8;
- (void)setLabelAttributes:(id)fp8;
- (void)doLayout;
- (float)computeMenuWidth;
- (struct _NSRect)listFrameForBounds:(struct _NSSize)fp8;

@end

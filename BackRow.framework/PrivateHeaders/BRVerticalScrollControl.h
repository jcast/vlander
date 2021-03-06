/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRControl.h>

@class BRParagraphTextControl, BRRenderLayer, BRScrollBarControl;

@interface BRVerticalScrollControl : BRControl
{
    BRScrollBarControl *_scrollBar;	// 8 = 0x8
    BRParagraphTextControl *_paragraphText;	// 12 = 0xc
    BRRenderLayer *_layer;	// 16 = 0x10
}

- (id)initWithScene:(id)fp8;
- (void)dealloc;
- (id)layer;
- (void)setFrame:(struct _NSRect)fp8;
- (void)setDocumentPath:(id)fp8 encoding:(unsigned int)fp12;
- (BOOL)brEventAction:(id)fp8;
- (struct _NSRect)paragraphTextFrame;

@end


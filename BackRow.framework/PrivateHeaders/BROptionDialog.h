/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRCenteredMenuController.h>

#import "BRMenuListItemProviderProtocol.h"

@class NSDictionary, NSMutableArray;

@interface BROptionDialog : BRCenteredMenuController <BRMenuListItemProvider>
{
    int _tag;	// 136 = 0x88
    int _currentSelection;	// 140 = 0x8c
    int _defaultIndex;	// 144 = 0x90
    NSMutableArray *_options;	// 148 = 0x94
    id _delegate;	// 152 = 0x98
    SEL _actionSelector;	// 156 = 0x9c
    NSDictionary *_userInfo;	// 160 = 0xa0
}

- (id)initWithScene:(id)fp8;
- (void)dealloc;
- (void)setActionSelector:(SEL)fp8 target:(id)fp12;
- (void)addOptionText:(id)fp8;
- (void)addOptionText:(id)fp8 isDefault:(BOOL)fp12;
- (long)selectedIndex;
- (id)selectedText;
- (id)itemForRow:(long)fp8;
- (long)itemCount;
- (void)itemSelected:(long)fp8;
- (id)titleForRow:(long)fp8;
- (long)rowForTitle:(id)fp8;
- (void)willBePushed;
- (void)setTag:(int)fp8;
- (int)tag;
- (void)setUserInfo:(id)fp8;
- (id)userInfo;

@end


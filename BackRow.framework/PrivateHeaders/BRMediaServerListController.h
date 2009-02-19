/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRMediaMenuController.h>

@class BRMediaHost, NSArray;

@interface BRMediaServerListController : BRMediaMenuController
{
    NSArray *_menuItems;	// 108 = 0x6c
    BRMediaHost *_hostDeletionCandidate;	// 112 = 0x70
    long _topDividerIndex;	// 116 = 0x74
    long _bottomDividerIndex;	// 120 = 0x78
}

- (id)initWithScene:(id)fp8;
- (void)dealloc;
- (id)previewControllerForItem:(long)fp8;
- (void)itemSelected:(long)fp8;
- (void)willBeExhumed;
- (void)wasPushed;
- (void)wasPopped;

@end


/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface BRLayoutManager : NSObject
{
    NSMutableArray *_controls;	// 4 = 0x4
    struct _NSRect _frame;	// 8 = 0x8
}

- (id)init;
- (void)dealloc;
- (void)setFrame:(struct _NSRect)fp8;
- (struct _NSRect)frame;
- (void)addControl:(id)fp8;
- (void)removeControl:(id)fp8;
- (id)controls;
- (void)removeAllControls;
- (void)layoutControls;

@end

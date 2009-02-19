/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRSingleton.h>

@class NSMutableArray, NSMutableDictionary;

@interface BRMenuSavedState : BRSingleton
{
    NSMutableArray *_currentStackPath;	// 4 = 0x4
    NSMutableDictionary *_cachedMenuState;	// 8 = 0x8
    BOOL _enabled;	// 12 = 0xc
}

+ (id)singleton;
+ (void)setSingleton:(id)fp8;
+ (void)controllerToBePushed:(id)fp8;
+ (void)controllerToBePopped:(id)fp8;
+ (void)saveSelection:(id)fp8 atIndex:(int)fp12;
+ (BOOL)previousSelectionForController:(id)fp8 previousSelection:(id *)fp12 previousIndex:(long *)fp16;
- (id)init;
- (void)dealloc;
- (void)setObject:(id)fp8 forKey:(id)fp12;
- (id)objectForKey:(id)fp8;
- (void)purge;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)fp8;

@end


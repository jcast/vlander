/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRSingleton.h>

@class NSMutableDictionary, NSString;

@interface BRLocalizedStringManager : BRSingleton
{
    NSString *_currentLanguage;	// 4 = 0x4
    NSMutableDictionary *_stringFileCache;	// 8 = 0x8
}

+ (id)singleton;
+ (void)setSingleton:(id)fp8;
+ (id)backRowLocalizedStringForKey:(id)fp8 inFile:(id)fp12;
+ (id)applicationLocalizedStringForKey:(id)fp8 inFile:(id)fp12;
+ (id)appliance:(id)fp8 localizedStringForKey:(id)fp12 inFile:(id)fp16;
+ (id)localizedStringForKey:(id)fp8 inFile:(id)fp12 fromBundle:(id)fp16;
- (id)init;
- (void)dealloc;

@end


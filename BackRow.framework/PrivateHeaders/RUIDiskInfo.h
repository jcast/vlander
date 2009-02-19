/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface RUIDiskInfo : NSObject
{
    NSString *_identifier;	// 4 = 0x4
    NSString *_mountpoint;	// 8 = 0x8
    BOOL _isBlank;	// 12 = 0xc
    int _diskType;	// 16 = 0x10
    NSString *_finderName;	// 20 = 0x14
}

+ (id)diskInfoWithIdentifier:(id)fp8 diskType:(int)fp12 isBlank:(BOOL)fp16 mountpoint:(id)fp20;
- (id)initWithIdentifier:(id)fp8 diskType:(int)fp12 isBlank:(BOOL)fp16 mountpoint:(id)fp20;
- (void)dealloc;
- (id)identifier;
- (id)mountpoint;
- (BOOL)isBlank;
- (BOOL)isDisc;
- (BOOL)isCD;
- (BOOL)isDVD;
- (int)diskType;
- (void)setFinderName:(id)fp8;
- (id)finderName;
- (BOOL)getFSRef:(struct FSRef *)fp8;

@end


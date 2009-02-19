/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface BRMediaHostState : NSObject
{
    NSString *_description;	// 4 = 0x4
}

+ (id)unavailable;
+ (id)available;
+ (id)mounting;
+ (id)mounted;
+ (id)mountFailed;
+ (id)unmounting;
- (id)initWithDescription:(id)fp8;
- (void)dealloc;
- (id)description;
- (id)mediaHostEvent:(id)fp8 forMediaHost:(id)fp12;

@end

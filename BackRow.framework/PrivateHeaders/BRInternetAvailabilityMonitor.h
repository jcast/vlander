/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRSingleton.h>

@class NSDate;

@interface BRInternetAvailabilityMonitor : BRSingleton
{
    BOOL _lastKnownState;	// 4 = 0x4
    NSDate *_lastRequestDate;	// 8 = 0x8
}

+ (id)singleton;
+ (void)setSingleton:(id)fp8;
- (void)dealloc;
- (BOOL)isInternetAvailable;

@end


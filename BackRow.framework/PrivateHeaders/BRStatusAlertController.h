/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@class BRRenderLayer;

@interface BRStatusAlertController : NSObject
{
    BRRenderLayer *_layer;	// 4 = 0x4
    BRRenderLayer *_statusAlertLayer;	// 8 = 0x8
}

+ (void)postStatusAlertNotificationOfType:(id)fp8;
+ (void)displayStatusAlertFromNotification:(id)fp8 inLayer:(id)fp12;

@end


/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRCenteredMenuController.h>

@class BRAirportNetwork, NSArray, NSString;

@interface BRAPNetworkMenuController : BRCenteredMenuController
{
    id _delegate;	// 136 = 0x88
    NSArray *_networks;	// 140 = 0x8c
    BRAirportNetwork *_selectedNetwork;	// 144 = 0x90
    NSString *_attemptedPassword;	// 148 = 0x94
}

- (id)initWithScene:(id)fp8 showBack:(BOOL)fp12 notifying:(id)fp16;
- (void)dealloc;
- (void)itemSelected:(long)fp8;
- (float)computeMenuWidth;

@end


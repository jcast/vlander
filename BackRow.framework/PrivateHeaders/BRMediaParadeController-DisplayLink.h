/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRMediaParadeController.h>

#import "BRDisplayLinkItemProtocol.h"

@interface BRMediaParadeController (DisplayLink) <BRDisplayLinkItem>
- (void)_startUpdates;
- (void)_stopUpdates;
- (BOOL)updateFrameForTime:(const CVTimeStamp *)fp8;
@end


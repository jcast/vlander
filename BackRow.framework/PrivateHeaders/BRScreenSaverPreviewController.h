/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

#import "BRMediaPreviewControllerProtocol.h"

@class NSString;

@interface BRScreenSaverPreviewController : NSObject <BRMediaPreviewController>
{
    id _plugin;	// 4 = 0x4
    NSString *_path;	// 8 = 0x8
}

+ (id)controllerWithScene:(id)fp8 path:(id)fp12;
- (id)initWithScene:(id)fp8 path:(id)fp12;
- (void)dealloc;
- (id)path;
- (id)layer;
- (void)activate;
- (void)deactivate;
- (void)willLoseFocus;
- (void)willRegainFocus;
- (void)willDeactivate;
- (BOOL)fadeLayerIn;

@end


/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRMainMenuController.h>

#import "BRIconSourceProtocolProtocol.h"

@interface BRMainMenuController (IconSource) <BRIconSourceProtocol>
- (long)iconCount;
- (id)iconAtIndex:(long)fp8;
- (id)_iconForInfo:(id)fp8;
- (id)_generateIconTextureForPath:(id)fp8 blurPath:(id)fp12 blur:(id *)fp16;
@end


/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRNetworkMediaProvider.h>

@class NSMutableArray;

@interface BRMovieTrailersProvider : BRNetworkMediaProvider
{
    NSMutableArray *_mediaAssets;	// 8 = 0x8
    int _lastError;	// 12 = 0xc
}

- (void)_networkStatusChanged:(id)fp8;
- (id)init;
- (void)dealloc;
- (id)mediaTypes;
- (id)providerID;
- (id)machineID;
- (id)mediaForEntityName:(id)fp8;
- (int)load;
- (int)unload;
- (int)errorCodeForProvider;
- (int)lastError;

@end

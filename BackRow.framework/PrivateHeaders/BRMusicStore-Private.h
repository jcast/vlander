/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRMusicStore.h>

@interface BRMusicStore (Private)
- (void)_bootstrapMusicStore;
- (void)_seedMusicStore;
- (id)_makeStoreRequest:(id)fp8;
- (void)_processJobs:(id)fp8;
- (void)_loadCollectionsForCollection:(id)fp8;
- (void)_loadMediaForCollection:(id)fp8;
- (void)_terminateNotification:(id)fp8;
- (void)_networkStateChanged:(id)fp8;
@end


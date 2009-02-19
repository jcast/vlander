/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@class BRMediaHostEvent, BRMediaHostState, NSDictionary, NSMutableArray, NSSet, NSString, NSTimer;

@interface BRMediaHost : NSObject
{
    NSString *_hostID;	// 4 = 0x4
    NSDictionary *_hostInfo;	// 8 = 0x8
    NSMutableArray *_providers;	// 12 = 0xc
    int _hostType;	// 16 = 0x10
    NSMutableArray *_eventQueue;	// 20 = 0x14
    NSSet *_eventFilter;	// 24 = 0x18
    BRMediaHostEvent *_filterEvent;	// 28 = 0x1c
    BRMediaHostState *_state;	// 32 = 0x20
    NSTimer *_eventTimer;	// 36 = 0x24
}

+ (void)initialize;
+ (void)unmountAllHosts;
+ (id)mediaHost;
+ (id)syncingMediaHostWithHostInfo:(id)fp8;
+ (id)streamingMediaHostWithHostInfo:(id)fp8;
+ (id)currentHost;
+ (id)mediaHostMatchingHostInfo:(id)fp8;
+ (id)mediaHostForMediaProvider:(id)fp8;
+ (id)mediaHosts;
+ (id)syncingHost;
+ (id)streamingHosts;
+ (void)addMediaHost:(id)fp8;
+ (void)removeMediaHost:(id)fp8;
+ (void)removeMediaHost:(id)fp8 supressingRemoveNotification:(BOOL)fp12;
+ (BOOL)isPairedForSyncing:(char *)fp8;
+ (id)mountedMediaHosts;
+ (id)mediaProviderAdvertisingMediaTypes:(id)fp8;
+ (id)localMediaProviderAdvertisingMediaTypes:(id)fp8;
- (id)init;
- (void)dealloc;
- (void)setHostname:(id)fp8;
- (void)waitForEvent:(id)fp8 toProcessEvent:(id)fp12;
- (void)postEvent:(id)fp8;
- (void)abandonEvent:(id)fp8;
- (id)hostID;
- (id)hostInfo;
- (id)hostname;
- (void)_mount;
- (void)_unmount;
- (id)lastAccessedDate;
- (id)mediaProviders;
- (void)addMediaProvider:(id)fp8;
- (void)removeMediaProvider:(id)fp8;
- (void)removeMediaProviderWithID:(id)fp8 andMachineID:(id)fp12;
- (id)mediaProviderWithID:(id)fp8 andMachineID:(id)fp12;
- (void)setState:(id)fp8;
- (id)state;
- (int)hostType;
- (BOOL)isLocal;

@end


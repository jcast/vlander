/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface BRIPConfiguration : NSObject
{
    NSString *_wirelessNetwork;	// 4 = 0x4
    NSString *_wirelessMACAddress;	// 8 = 0x8
    NSString *_wirelessIPAddress;	// 12 = 0xc
    NSString *_wirelessSubnetMask;	// 16 = 0x10
    NSString *_wirelessRouter;	// 20 = 0x14
    NSArray *_wirelessDNSAddresses;	// 24 = 0x18
    long _wirelessSignalQuality;	// 28 = 0x1c
    unsigned int _wirelessUseDHCP:1;	// 32 = 0x20
    unsigned int _wirelessActive:1;	// 32 = 0x20
    NSString *_wiredMACAddress;	// 36 = 0x24
    NSString *_wiredIPAddress;	// 40 = 0x28
    NSString *_wiredSubnetMask;	// 44 = 0x2c
    NSString *_wiredRouter;	// 48 = 0x30
    NSArray *_wiredDNSAddresses;	// 52 = 0x34
    unsigned int _wiredUseDHCP:1;	// 56 = 0x38
    unsigned int _wiredActive:1;	// 56 = 0x38
}

+ (void)startMonitoringNetworkChanges;
- (id)initFromCurrentConfiguration;
- (void)dealloc;
- (id)description;
- (BOOL)writeToPreferences;
- (void)setUseDHCPForInterface:(int)fp8;
- (void)setAddress:(id)fp8 subnetMask:(id)fp12 router:(id)fp16 forInterface:(int)fp20;
- (void)setDNSAddresses:(id)fp8 forInterface:(int)fp12;
- (BOOL)isActiveForInterface:(int)fp8;
- (BOOL)useDHCPForInterface:(int)fp8;
- (id)MACaddressForInterface:(int)fp8;
- (id)IPaddressForInterface:(int)fp8;
- (id)subnetMaskForInterface:(int)fp8;
- (id)routerForInterface:(int)fp8;
- (id)dnsAddressesForInterface:(int)fp8;
- (id)wirelessNetwork;
- (long)wirelessSignalQuality;

@end


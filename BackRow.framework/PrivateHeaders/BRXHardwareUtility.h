/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRSingleton.h>

@interface BRXHardwareUtility : BRSingleton
{
    BOOL _isEmbeddedHardwareDevice;	// 4 = 0x4
}

+ (id)singleton;
+ (void)setSingleton:(id)fp8;
+ (void)turnOnWhiteLED;
+ (void)turnOffWhiteLED;
+ (void)blinkWhiteLED;
+ (void)turnOnAmberLED;
+ (void)turnOffAmberLED;
+ (void)blinkAmberLED;
+ (BOOL)isEmbeddedHardwareDevice;
+ (BOOL)bootedFromRecoveryPartition;
+ (id)mediaFolderPath;
+ (void)flushDiskChanges;
+ (void)turnOnDriveAcceleration;
+ (void)turnOffDriveAcceleration;
- (id)init;

@end


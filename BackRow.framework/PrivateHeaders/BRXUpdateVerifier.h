/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@interface BRXUpdateVerifier : NSObject
{
    struct cssm_key *_publicKey;	// 4 = 0x4
}

- (void)dealloc;
- (BOOL)verifyFile:(id)fp8 withSignatureFile:(id)fp12;

@end

/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Foundation/NSException.h>

@interface BRBacktracingException : NSException
{
}

+ (void)install;
+ (void)setSignificantRaiseHandler:(void *)fp8;
+ (id)backtraceSkippingFrames:(int)fp8;
+ (void)logBacktraceSkippingFrames:(int)fp8 withMessage:(id)fp12;
+ (id)backtrace;
+ (void)logBacktraceWithMessage:(id)fp8;
- (id)initWithName:(id)fp8 reason:(id)fp12 userInfo:(id)fp16;
- (id)backtrace;
- (void)raise;
- (void)raiseWithoutReporting;

@end


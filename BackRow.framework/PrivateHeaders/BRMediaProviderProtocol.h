/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

@protocol BRMediaProvider <NSObject>
- (id)providerID;
- (id)machineID;
- (id)providerName;
- (id)objectsWithEntityName:(id)fp8 qualifiedByPredicate:(id)fp12 sortDescriptors:(id)fp16 error:(id *)fp20;
- (int)status;
- (id)mediaTypes;
- (BOOL)autoload;
- (void)reset;
@end


/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface BRBaseParserDelegate : NSObject
{
    NSString *_characters;	// 4 = 0x4
}

- (void)dealloc;
- (void)parser:(id)fp8 didStartElement:(id)fp12 namespaceURI:(id)fp16 qualifiedName:(id)fp20 attributes:(id)fp24;
- (void)parser:(id)fp8 didEndElement:(id)fp12 namespaceURI:(id)fp16 qualifiedName:(id)fp20;
- (void)parser:(id)fp8 foundCharacters:(id)fp12;
- (void)parser:(id)fp8 parseErrorOccurred:(id *)fp12;
- (id)characters;

@end


/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <BackRow/BRBaseMediaAsset.h>

@class NSMutableDictionary;

@interface BRXMLMediaAsset : BRBaseMediaAsset
{
    NSMutableDictionary *_info;	// 8 = 0x8
}

- (id)initWithMediaProvider:(id)fp8;
- (void)dealloc;
- (void)setObject:(id)fp8 forKey:(id)fp12;
- (id)resolution;
- (id)assetID;
- (id)artist;
- (id)mediaSummary;
- (id)copyright;
- (id)previewURL;
- (id)mediaURL;
- (id)title;
- (id)publisher;
- (id)datePublished;
- (id)dateAcquired;
- (id)composer;
- (id)directors;
- (long)duration;
- (id)rating;
- (id)mediaType;
- (BOOL)hasVideoContent;
- (id)primaryGenre;
- (id)genres;
- (id)cast;
- (struct CGImage *)coverArt;
- (id)coverArtID;
- (BOOL)hasCoverArt;
- (id)description;

@end


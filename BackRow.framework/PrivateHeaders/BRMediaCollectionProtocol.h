/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

@protocol BRMediaCollection <NSObject>
- (id)provider;
- (id)collectionID;
- (id)title;
- (id)artist;
- (int)count;
- (id)mediaType;
- (id)mediaAssets;
- (BOOL)isCompilation;
- (BOOL)isSingleArtistCompilation;
- (BOOL)hasCoverArt;
- (struct CGImage *)coverArt;
- (id)collectionType;
- (id)parentCollection;
- (id)childCollections;
- (long)duration;
- (BOOL)isLocal;
- (struct CGImage *)coverArtNoDefault;
@end

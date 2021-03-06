/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

@protocol BRMediaAsset <NSObject>
- (id)provider;
- (id)assetID;
- (id)title;
- (id)artist;
- (id)mediaSummary;
- (id)mediaDescription;
- (id)publisher;
- (id)composer;
- (id)copyright;
- (float)userStarRating;
- (void)setUserStarRating:(float)fp8;
- (float)starRating;
- (id)rating;
- (long)performanceCount;
- (void)incrementPerformanceCount;
- (void)incrementPerformanceOrSkipCount:(unsigned int)fp8;
- (BOOL)hasBeenPlayed;
- (void)setHasBeenPlayed:(BOOL)fp8;
- (long)duration;
- (id)mediaURL;
- (id)previewURL;
- (BOOL)hasCoverArt;
- (id)coverArtID;
- (BOOL)isProtectedContent;
- (id)playbackRightsOwner;
- (struct CGImage *)coverArt;
- (struct CGImage *)coverArtForBookmarkTimeInMS:(unsigned int)fp8;
- (id)mediaUTI;
- (id)mediaType;
- (BOOL)hasVideoContent;
- (BOOL)isDisabled;
- (id)collections;
- (id)primaryCollection;
- (int)primaryCollectionOrder;
- (int)physicalMediaID;
- (id)seriesName;
- (id)broadcaster;
- (id)episodeNumber;
- (unsigned int)season;
- (unsigned int)episode;
- (id)genres;
- (id)primaryGenre;
- (id)cast;
- (id)producers;
- (id)directors;
- (id)dateAcquired;
- (id)dateAcquiredString;
- (id)datePublished;
- (id)datePublishedString;
- (void)setBookmarkTimeInMS:(unsigned int)fp8;
- (void)setBookmarkTimeInSeconds:(unsigned int)fp8;
- (unsigned int)bookmarkTimeInMS;
- (unsigned int)bookmarkTimeInSeconds;
- (unsigned int)startTimeInMS;
- (unsigned int)startTimeInSeconds;
- (unsigned int)stopTimeInMS;
- (unsigned int)stopTimeInSeconds;
- (id)resolution;
- (BOOL)canBePlayedInShuffle;
- (BOOL)isLocal;
- (struct CGImage *)coverArtNoDefault;
- (void)skip;
@end


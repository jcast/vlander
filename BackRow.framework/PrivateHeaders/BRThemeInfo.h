/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface BRThemeInfo : NSObject
{
    struct _NSSize _size;	// 4 = 0x4
    NSDictionary *_menuItemTextAttributes;	// 12 = 0xc
    NSDictionary *_centeredMenuItemTextAttributes;	// 16 = 0x10
    NSDictionary *_menuItemSmallTextAttributes;	// 20 = 0x14
    NSDictionary *_pairingDescriptionTextAttributes;	// 24 = 0x18
    NSDictionary *_pairingCancelTextAttributes;	// 28 = 0x1c
    NSDictionary *_pairingRequirementsTextAttributes;	// 32 = 0x20
    NSDictionary *_pairingPINTextAttributes;	// 36 = 0x24
    NSDictionary *_menuTitleTextAttributes;	// 40 = 0x28
    NSDictionary *_mediumTextAttributes;	// 44 = 0x2c
    NSDictionary *_smallTextAttributes;	// 48 = 0x30
    NSDictionary *_errorFailureReasonAttributes;	// 52 = 0x34
    NSDictionary *_errorSuggestionAttributes;	// 56 = 0x38
    NSDictionary *_trackTimeAttributes;	// 60 = 0x3c
    NSDictionary *_ccTextAttributes;	// 64 = 0x40
    NSDictionary *_metadataTitleAttributes;	// 68 = 0x44
    NSDictionary *_metadataSummaryFieldAttributes;	// 72 = 0x48
    NSDictionary *_metadataLineAttributes;	// 76 = 0x4c
    NSDictionary *_metadataLabelAttributes;	// 80 = 0x50
    NSDictionary *_nowPlayingPrimaryTextAttributes;	// 84 = 0x54
    NSDictionary *_nowPlayingSecondaryTextAttributes;	// 88 = 0x58
    NSDictionary *_transportTimeTextAttributes;	// 92 = 0x5c
    NSDictionary *_sortWidgetEnabledTextAttributes;	// 96 = 0x60
    NSDictionary *_sortWidgetDisabedTextAttributes;	// 100 = 0x64
    NSDictionary *_textEntryGlyphAttributes;	// 104 = 0x68
    NSDictionary *_textEntrySmallGlyphAttributes;	// 108 = 0x6c
    NSDictionary *_textEntryGlyphGrayAttributes;	// 112 = 0x70
    NSDictionary *_textEntryInputFieldAttributes;	// 116 = 0x74
    NSDictionary *_ripcordPromptAttributes;	// 120 = 0x78
    NSDictionary *_settingsItemSmallTextAttributes;	// 124 = 0x7c
    NSDictionary *_settingsAboutLabelAttributes;	// 128 = 0x80
    NSDictionary *_settingsAboutValueAttributes;	// 132 = 0x84
    NSDictionary *_syncProgressMainAttributes;	// 136 = 0x88
    NSDictionary *_syncProgressSecondaryAttributes;	// 140 = 0x8c
    NSDictionary *_copyrightAttributes;	// 144 = 0x90
    NSDictionary *_waitSpinnerPromptAttributes;	// 148 = 0x94
    NSDictionary *_iconMessageTitleAttributes;	// 152 = 0x98
    NSDictionary *_iconMessageBodyAttributes;	// 156 = 0x9c
    NSMutableDictionary *_ratingsImages;	// 160 = 0xa0
    NSMutableDictionary *_cachedAttributes;	// 164 = 0xa4
    float _textLayerHorizontalSpacing;	// 168 = 0xa8
}

+ (id)sharedTheme;
- (void)dealloc;
- (id)appleTVIconForScene:(id)fp8;
- (struct _NSSize)appleTVIconGlowSize;
- (id)appleTVIconGlowForScene:(id)fp8;
- (id)errorIconForScene:(id)fp8;
- (id)errorImageForScene:(id)fp8;
- (id)shuffleImageForScene:(id)fp8;
- (id)highlightedShuffleImageForScene:(id)fp8;
- (id)syncLinkImageForScene:(id)fp8;
- (id)highlightedSyncLinkImageForScene:(id)fp8;
- (id)syncLinkArrowImageForScene:(id)fp8;
- (id)highlightedSyncLinkArrowImageForScene:(id)fp8;
- (id)currentlyPlayingImageForScene:(id)fp8;
- (id)highlightedCurrentlyPlayingImageForScene:(id)fp8;
- (id)unplayedPodcastImageForScene:(id)fp8;
- (id)playedPodcastImageForScene:(id)fp8;
- (id)unSelectedSettingImageForScene:(id)fp8;
- (id)selectedSettingImageForScene:(id)fp8;
- (id)highlightedSelectedSettingImageForScene:(id)fp8;
- (float)wirelessIconHorizontalOffset;
- (float)wirelessIconKerningFactor;
- (id)wirelessImageForScene:(id)fp8;
- (id)largeWirelessImageForScene:(id)fp8;
- (float)gearIconHorizontalOffset;
- (float)gearIconKerningFactor;
- (id)gearImageForScene:(id)fp8;
- (id)photoSettingsImageForScene:(id)fp8;
- (id)pairImageForScene:(id)fp8;
- (id)appleTVImageForScene:(id)fp8;
- (id)goBackImageForScene:(id)fp8;
- (id)airportImageForScene:(id)fp8 signalStrength:(long)fp12;
- (struct CGImage *)ratingImageForString:(id)fp8;
- (struct _NSRect)titleSafeFrame;
- (void)setSize:(struct _NSSize)fp8;
- (float)minimumHorizontalTextLayerSpacing;
- (id)menuItemTextAttributes;
- (id)centeredMenuItemTextAttributes;
- (id)menuItemSmallTextAttributes;
- (id)menuTitleTextAttributes;
- (id)mediumTextAttributes;
- (id)smallTextAttributes;
- (id)errorFailureReasonAttributes;
- (id)errorSuggestionAttributes;
- (id)trackTimeAttributes;
- (id)closedCaptionAttributes;
- (id)metadataTitleAttributes;
- (id)metadataSummaryFieldAttributes;
- (id)metadataLineAttributes;
- (id)metadataLabelAttributes;
- (id)iconMessageTitleAttributes;
- (id)iconMessageBodyAttributes;
- (id)pairingDescriptionTextAttributes;
- (id)pairingCancelTextAttributes;
- (id)pairingRequirementsTextAttributes;
- (id)pairingPINTextAttributes;
- (id)nowPlayingPrimaryTextAttributes;
- (id)nowPlayingSecondaryTextAttributes;
- (id)sortWidgetEnabledTextAttributes;
- (id)sortWidgetDisabledTextAttributes;
- (id)textEntryGlyphAttributes;
- (id)textEntrySmallGlyphAttributes;
- (id)textEntryGlyphGrayAttributes;
- (id)textEntryInputFieldAttributes;
- (id)ripcordPromptAttributes;
- (id)waitSpinnerPromptAttributes;
- (id)settingsItemSmallTextAttributes;
- (id)settingsAboutLabelAttributes;
- (id)settingsAboutValueAttributes;
- (id)copyrightAttributes;
- (id)paragraphTextAttributes;
- (id)syncProgressMainAttributes;
- (id)syncProgressSecondaryAttributes;
- (id)trackInfoPrimaryAttributes;
- (id)trackInfoSecondaryAttributes;
- (float)settingsAboutRowHeight;
- (struct _NSRect)centeredMenuHeaderFrameForMasterFrame:(struct _NSRect)fp8;
- (float)listRowHeight;
- (float)listIconHeight;
- (float)arrowSizeToRowHeightRatio;
- (float)spinnerSizeToRowHeightRatio;
- (float)menuMinimumWidthFactor;
- (float)menuMaximumWidthFactor;
- (float)osdTimeOutValue;
- (float)fadeThroughBlackDuration;
- (float)roundRectCornerRadius;
- (struct _NSSize)downsampleSize;
- (int)paradeCountThreshold;
- (id)truncationEllipsis;

@end


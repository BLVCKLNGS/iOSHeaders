//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBIconImageView.h"

#import "SBFolderIconObserver.h"
#import "SBIconBlurryBackgroundViewObserver.h"

@class NSMutableArray, NSString, SBFloatyFolderView, SBFolderIconBackgroundView, UIView, _SBIconGridWrapperView;

@interface SBFolderIconImageView : SBIconImageView <SBFolderIconObserver, SBIconBlurryBackgroundViewObserver>
{
    SBFolderIconBackgroundView *_backgroundView;
    UIView *_accessibilityBackgroundView;
    UIView *_pageGridContainer;
    _SBIconGridWrapperView *_leftWrapperView;
    _SBIconGridWrapperView *_rightWrapperView;
    NSMutableArray *_pageElements;
    unsigned long long _currentPageIndex;
    SBFloatyFolderView *_crossfadeFolderView;
    UIView *_crossfadeScalingView;
    _Bool _animating;
}

- (void).cxx_destruct;
- (void)_showRightMinigrid;
- (void)_showLeftMinigrid;
- (void)_setPageElements:(id)arg1;
- (void)_setupGridViewsInDefaultConfiguration;
- (id)_currentPageElement;
- (id)_folderIcon;
- (struct CGSize)_interiorGridSizeClipRect;
- (struct CGSize)_interPageSpacing;
- (Class)_iconGridImageClass;
- (void)_updateAccessibilityBackgroundContrast;
- (void)setIcon:(id)arg1 location:(int)arg2 animated:(_Bool)arg3;
- (void)_performScrollingMovingToLeft:(_Bool)arg1 movingToRight:(_Bool)arg2 targetPageIndex:(unsigned long long)arg3 targetPageScrollRow:(unsigned long long)arg4 newLeftElement:(id)arg5 newRightElement:(id)arg6 animated:(_Bool)arg7;
- (void)_updateRasterization;
- (void)_setAnimating:(_Bool)arg1;
- (void)blurryBackgroundViewDidChangeWhetherBlurring:(id)arg1;
- (void)folderIcon:(id)arg1 didUpdateGridImage:(id)arg2 forListIndex:(unsigned long long)arg3 forContainedIconImageUpdate:(id)arg4;
- (void)cleanupAfterFloatyFolderCrossfade;
- (void)setFloatyFolderCrossfadeFraction:(double)arg1;
- (void)prepareToCrossfadeWithFloatyFolderView:(id)arg1 allowFolderInteraction:(_Bool)arg2;
- (void)setSuppressesBlurryBackgroundChanges:(_Bool)arg1;
- (void)setWallpaperRelativeCenter:(struct CGPoint)arg1;
- (void)setBackgroundScale:(double)arg1;
- (id)backgroundView;
- (void)setBackgroundAndIconGridImageAlpha:(double)arg1;
- (void)setIconGridImageAlpha:(double)arg1;
- (struct CGRect)frameForMiniIconAtIndexPath:(id)arg1;
- (struct CGRect)visibleImageRelativeFrameForMiniIconAtIndex:(unsigned long long)arg1;
- (struct CGRect)frameForMiniIconAtIndex:(unsigned long long)arg1;
- (unsigned long long)lastVisibleMiniIconIndex;
- (unsigned long long)centerVisibleMiniIconIndex;
- (unsigned long long)firstVisibleMiniIconIndex;
- (unsigned long long)visibleMiniIconListIndex;
- (unsigned long long)visibleMiniIconCount;
- (void)scrollToGapOrTopIfFullOfPage:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)scrollToTopOfPage:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)scrollToFirstGapAnimated:(_Bool)arg1;
- (void)scrollToTopOfFirstPageAnimated:(_Bool)arg1;
- (void)layoutSubviews;
- (id)snapshot;
- (void)prepareForReuse;
- (void)updateImageAnimated:(_Bool)arg1;
- (id)darkeningOverlayImage;
- (id)_generateSquareContentsImage;
- (id)contentsImage;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


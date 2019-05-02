/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UIScrollViewDelegate.h"
#import "SpringBoard-Structs.h"

@class UIView, SBSearchScrollView, NSHashTable;

__attribute__((visibility("hidden")))
@interface SBSearchGesture : XXUnknownSuperclass <UIScrollViewDelegate> {
	NSHashTable* _observers;
	SBSearchScrollView* _scrollView;
	BOOL _suppressObserverCallbacks;
	BOOL _animatingReset;
	BOOL _enabled;
	UIView* _targetView;
}
@property(assign, nonatomic) BOOL enabled;
@property(readonly, assign, nonatomic, getter=isAnimatingReset) BOOL animatingReset;
@property(retain, nonatomic) UIView* targetView;
+(id)sharedInstance;
-(void)scrollViewDidEndScrollingAnimation:(id)scrollView;
-(void)scrollViewDidScrollToTop:(id)scrollView;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
-(void)scrollViewWillEndDragging:(id)scrollView withVelocity:(CGPoint)velocity targetContentOffset:(inout CGPoint*)offset;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)_displayLaunched:(id)launched;
-(void)_openFolderChanged:(id)changed;
-(void)_iconEditingStateChanged:(id)changed;
-(void)_updateScrollingEnabled;
-(BOOL)_isShowingSearch;
-(void)_updateForFinalContentOffset;
-(void)_updateForScrollingEnded;
-(void)resetAnimated:(BOOL)animated;
-(void)removeObserver:(id)observer;
-(void)addObserver:(id)observer;
-(void)updateForRotation;
-(void)dealloc;
-(id)init;
@end


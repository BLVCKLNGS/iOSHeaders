//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SBCollectionViewCellDelegate.h"
#import "SBStarkBannerTargetObserver.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSArray, NSString, SBCarBannerNotificationView, SBStarkAlertItemBannerSource, SBStarkBannerCell, SBStarkBannerTarget, SBStarkBulletinBannerSource, SBStarkNotificationLayout, SBStarkSystemGestureManager, SBUIBannerContext, UISwipeGestureRecognizer, UITapGestureRecognizer;

@interface SBStarkNotificationViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, SBCollectionViewCellDelegate, SBStarkBannerTargetObserver, UIGestureRecognizerDelegate>
{
    id <SBStarkSessionConfiguring> _configuration;
    SBStarkSystemGestureManager *_systemGestureManager;
    _Bool _touchCapable;
    _Bool _dismissingForSystemGesture;
    UITapGestureRecognizer *_backGestureRecognizer;
    UITapGestureRecognizer *_selectGestureRecognizer;
    SBStarkBannerTarget *_bannerTarget;
    SBStarkAlertItemBannerSource *_alertItemBannerSource;
    SBStarkBulletinBannerSource *_bulletinBannerSource;
    SBUIBannerContext *_currentContext;
    NSArray *_currentSubActionLabels;
    SBStarkBannerCell *_currentCell;
    int _state;
    SBStarkNotificationLayout *_notificationsLayout;
    SBCarBannerNotificationView *_notificationsView;
    UITapGestureRecognizer *_cancelNotificationTapGestureRecognizer;
    UISwipeGestureRecognizer *_dismissNotificationTouchpadSwipeGestureRecognizer;
    id <SBStarkNotificationViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (id)_bulletinBannerSource;
- (void)_performBackGesture:(id)arg1;
- (void)_performCancelNotificationTapGesture:(id)arg1;
- (void)_performSelectGesture:(id)arg1;
- (void)_performSwipeGesture:(id)arg1;
@property(nonatomic, setter=_setState:) int state;
- (void)_showTestNotificationWithTitle:(id)arg1;
- (void)_wheelChangedWithEvent:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)dealloc;
@property(nonatomic) __weak id <SBStarkNotificationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissCurrent;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)handleMenuEvent;
- (id)initWithConfiguration:(id)arg1 systemGestureManager:(id)arg2;
- (_Bool)isSuspended;
- (void)loadView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setSuspended:(_Bool)arg1 cancellingCurrent:(_Bool)arg2 forReason:(id)arg3;
- (void)setSuspended:(_Bool)arg1 forReason:(id)arg2;
- (void)starkBannerTarget:(id)arg1 didChangeContextWithDismissReason:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


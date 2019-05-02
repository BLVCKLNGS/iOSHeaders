//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSSet, NSURL, SBFolder, SBIcon, SBIconView, UITargetedDragPreview, UITouch, UIView, UIView<SBIconAccessoryView>, UIView<SBIconLabelAccessoryView>, UIView<SBReusableView>;

@protocol SBIconViewDelegate <NSObject>

@optional
- (long long)closeBoxTypeForIconView:(SBIconView *)arg1;
- (_Bool)icon:(SBIconView *)arg1 canReceiveGrabbedIcon:(SBIcon *)arg2;
- (void)icon:(SBIconView *)arg1 openFolder:(SBFolder *)arg2 animated:(_Bool)arg3;
- (void)icon:(SBIconView *)arg1 touchEnded:(_Bool)arg2;
- (void)icon:(SBIconView *)arg1 touchMoved:(UITouch *)arg2;
- (void)iconCloseBoxTapped:(SBIconView *)arg1;
- (double)iconLabelWidth;
- (_Bool)iconShouldAllowCloseBoxTap:(SBIconView *)arg1;
- (_Bool)iconShouldAllowTap:(SBIconView *)arg1;
- (void)iconTapped:(SBIconView *)arg1;
- (void)iconTouchBegan:(SBIconView *)arg1;
- (_Bool)iconView:(SBIconView *)arg1 canAddDragItemsToSession:(id <UIDragSession>)arg2;
- (void)iconView:(SBIconView *)arg1 didEndDragSession:(id <UIDragSession>)arg2 withOperation:(unsigned long long)arg3;
- (void)iconView:(SBIconView *)arg1 dragLiftAnimationDidChangeDirection:(long long)arg2;
- (UIView<SBIconAccessoryView> *)iconView:(SBIconView *)arg1 iconAccessoryViewOfClass:(Class)arg2;
- (UIView<SBIconLabelAccessoryView> *)iconView:(SBIconView *)arg1 iconLabelAccessoryViewOfType:(long long)arg2;
- (void)iconView:(SBIconView *)arg1 session:(id <UIDragSession>)arg2 willEndWithOperation:(unsigned long long)arg3;
- (void)iconView:(SBIconView *)arg1 willAddDragItems:(NSArray *)arg2 toSession:(id <UIDragSession>)arg3;
- (void)iconView:(SBIconView *)arg1 willAnimateDragCancelWithAnimator:(id <UIDragAnimating>)arg2;
- (void)iconView:(SBIconView *)arg1 willAnimateDragLiftWithAnimator:(id <UIDragAnimating>)arg2 session:(id <UIDragSession>)arg3;
- (void)iconView:(SBIconView *)arg1 willChangeToIcon:(SBIcon *)arg2;
- (void)iconView:(SBIconView *)arg1 willRemoveIconAccessoryView:(UIView<SBIconAccessoryView> *)arg2;
- (void)iconView:(SBIconView *)arg1 willRemoveLabelIconAccessoryView:(UIView<SBReusableView> *)arg2;
- (void)iconView:(SBIconView *)arg1 willUseDragPreview:(UIView *)arg2 session:(id <UIDragSession>)arg3;
- (void)iconView:(SBIconView *)arg1 willUsePreviewForCancelling:(UITargetedDragPreview *)arg2 targetIconView:(SBIconView *)arg3;
- (_Bool)iconViewCanBeginDrags:(SBIconView *)arg1;
- (_Bool)iconViewDisplaysBadges:(SBIconView *)arg1;
- (_Bool)iconViewDisplaysCloseBox:(SBIconView *)arg1;
- (void)iconViewWillBeginDrag:(SBIconView *)arg1 session:(id <UIDragSession>)arg2;
- (SBIconView *)iconViewWillCancelDrag:(SBIconView *)arg1;
- (NSSet *)launchActionsForIconView:(SBIconView *)arg1;
- (NSURL *)launchURLForIconView:(SBIconView *)arg1;
- (NSArray *)requiredContextIDsForDragSessionInIconView:(SBIconView *)arg1;
- (double)scale;
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBControlCenterSectionView.h"

@class SBCCButtonLikeSectionView;

__attribute__((visibility("hidden")))
@interface SBCCButtonLikeSectionSplitView : SBControlCenterSectionView {
	float _separatorWidth;
	BOOL _leftHidden;
	BOOL _rightHidden;
	SBCCButtonLikeSectionView* _leftSection;
	SBCCButtonLikeSectionView* _rightSection;
}
@property(assign, nonatomic) SBCCButtonLikeSectionView* rightSection;
@property(assign, nonatomic) SBCCButtonLikeSectionView* leftSection;
-(void)layoutSubviews;
-(CGRect)_frameForSectionSlot:(int)sectionSlot;
-(UIEdgeInsets)_landscapeInsetsForSection;
-(id)_viewForSectionSlot:(int)sectionSlot;
-(void)_updateButtonsCorners;
-(void)_updateLabelParameters;
-(void)setRightSectionHidden:(BOOL)hidden animated:(BOOL)animated;
-(void)setLeftSectionHidden:(BOOL)hidden animated:(BOOL)animated;
-(void)_relayoutAnimated:(BOOL)animated;
-(BOOL)_useLandscapeBehavior;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:34 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBScaleIconZoomAnimator.h>

@class SBFolderController, SBFloatyFolderView, _SBInnerFolderIconZoomAnimator, SBFolderZoomSettings, SBFolderIcon, SBFolderIconView;

@interface SBFolderIconZoomAnimator : SBScaleIconZoomAnimator {

	SBFolderController* _innerFolderController;
	SBFloatyFolderView* _innerFolderView;
	_SBInnerFolderIconZoomAnimator* _innerZoomAnimator;

}

@property (nonatomic,retain) SBFolderZoomSettings * settings; 
@property (nonatomic,readonly) SBFolderIcon * targetIcon; 
@property (nonatomic,readonly) SBFolderIconView * targetIconView; 
-(void)_cleanupAnimation;
-(void)_prepareAnimation;
-(BOOL)_forceSquareZoomDimension;
-(CGRect)_zoomedFrame;
-(void)_setAnimationFraction:(double)arg1 ;
-(unsigned long long)_numberOfSignificantAnimations;
-(void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(/*^block*/id)arg3 ;
-(id)initWithOuterController:(id)arg1 innerController:(id)arg2 folderIcon:(id)arg3 ;
@end


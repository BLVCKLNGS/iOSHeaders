/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:33 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBSearchViewController;

@interface SBSearchViewPresentationManager : NSObject {

	long long _searchViewPresentationState;
	double _searchViewPreviousProgress;
	SBSearchViewController* _searchViewController;

}
-(id)initWithSearchViewController:(id)arg1 ;
-(void)updateStateWithProgress:(double)arg1 fromBreadcrumb:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)updateToState:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_setState:(long long)arg1 ;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardViewBase.h"

@class UIView;

@interface SBDashBoardTodayContentView : SBDashBoardViewBase
{
    _Bool _bouncing;
    UIView *_navigationView;
    UIView *_todayView;
}

- (void).cxx_destruct;
- (void)_adjustContentForEdgeBounce;
- (void)_resetContentAfterEdgeBounce;
@property(nonatomic, getter=isBouncing) _Bool bouncing; // @synthesize bouncing=_bouncing;
- (void)layoutSubviews;
@property(nonatomic) __weak UIView *navigationView; // @synthesize navigationView=_navigationView;
@property(nonatomic) __weak UIView *todayView; // @synthesize todayView=_todayView;

@end


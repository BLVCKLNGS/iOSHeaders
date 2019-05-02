//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBReusableViewMap, SBWindow, UIView;
@protocol SBReusableView;

@protocol SBReusableViewMapDelegate <NSObject>
- (SBWindow *)windowForRecycledViewsInViewMap:(SBReusableViewMap *)arg1;
- (unsigned long long)viewMap:(SBReusableViewMap *)arg1 maxRecycledViewsOfClass:(Class)arg2;

@optional
- (void)viewMap:(SBReusableViewMap *)arg1 willRecycleView:(UIView<SBReusableView> *)arg2;
@end


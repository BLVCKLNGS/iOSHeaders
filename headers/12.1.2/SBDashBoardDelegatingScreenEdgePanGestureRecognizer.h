//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBScreenEdgePanGestureRecognizer.h"

@interface SBDashBoardDelegatingScreenEdgePanGestureRecognizer : SBScreenEdgePanGestureRecognizer
{
    id <SBDashBoardDelegatingScreenEdgePanGestureRecognizerDelegate> _interfaceDelegate;
}

@property(nonatomic) __weak id <SBDashBoardDelegatingScreenEdgePanGestureRecognizerDelegate> interfaceDelegate; // @synthesize interfaceDelegate=_interfaceDelegate;
- (void).cxx_destruct;
- (long long)_touchInterfaceOrientation;

@end


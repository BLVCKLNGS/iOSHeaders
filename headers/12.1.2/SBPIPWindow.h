//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBWindow.h"

@class NSArray;

@interface SBPIPWindow : SBWindow
{
}

- (_Bool)isActive;
- (id)_pipWindowRootVC;
- (long long)interfaceOrientationForContainerViewController:(id)arg1;
- (void)removeContainerViewController:(id)arg1;
- (void)addContainerViewController:(id)arg1;
@property(readonly, nonatomic) NSArray *containerViewControllers;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setRootViewController:(id)arg1;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBWindow.h"

@class SBStarkStatusBarViewController;
@protocol SBStarkSessionConfiguring;

@interface SBStarkStatusBarWindow : SBWindow
{
    id <SBStarkSessionConfiguring> _configuration;
}

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)_reversesLinearFocusWrapping;
@property(retain, nonatomic) SBStarkStatusBarViewController *rootViewController;
- (id)initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 configuration:(id)arg4;

@end


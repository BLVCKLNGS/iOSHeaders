//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SBWindow, UIScreen, UIView;

@interface SBFolderControllerAnimationContext : NSObject
{
    UIScreen *_screen;
    SBWindow *_animationWindow;
    UIView *_fallbackIconContainer;
}

+ (id)contextWithScreen:(id)arg1 animationWindow:(id)arg2 fallbackIconContainer:(id)arg3;
@property(readonly, nonatomic) UIView *fallbackIconContainer; // @synthesize fallbackIconContainer=_fallbackIconContainer;
@property(readonly, nonatomic) SBWindow *animationWindow; // @synthesize animationWindow=_animationWindow;
@property(readonly, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
- (void).cxx_destruct;
- (id)initWithScreen:(id)arg1 animationWindow:(id)arg2 fallbackIconContainer:(id)arg3;

@end

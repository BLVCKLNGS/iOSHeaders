//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "_SBFakeBlur-Protocol.h"

@class NSString, SBFWallpaperView, UIImageView;
@protocol _SBFakeBlurObserver;

@interface _SBFakeBlurView : UIView <_SBFakeBlur>
{
    long long _requestedStyle;
    long long _effectiveStyle;
    SBFWallpaperView *_wallpaperView;
    _Bool _fullscreen;
    _Bool _transformIgnoresRotation;
    UIImageView *_imageView;
    id <_SBFakeBlurObserver> _observer;
}

+ (id)_imageForStyle:(inout long long *)arg1 withSource:(id)arg2;
@property(nonatomic) _Bool transformIgnoresRotation; // @synthesize transformIgnoresRotation=_transformIgnoresRotation;
@property(nonatomic) _Bool fullscreen; // @synthesize fullscreen=_fullscreen;
@property(nonatomic) id <_SBFakeBlurObserver> observer; // @synthesize observer=_observer;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)layoutSubviews;
- (void)rotateToInterfaceOrientation:(long long)arg1;
- (void)_setImage:(id)arg1 style:(long long)arg2 notify:(_Bool)arg3;
- (void)_updateImageWithSource:(id)arg1 notifyObserver:(_Bool)arg2;
- (void)updateImageWithSource:(id)arg1;
- (void)reconfigureWithSource:(id)arg1;
@property(readonly, nonatomic) long long variant;
- (void)dealloc;
- (id)initWithVariant:(long long)arg1;
- (long long)effectiveStyle;
- (void)requestStyle:(long long)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


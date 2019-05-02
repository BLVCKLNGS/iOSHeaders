//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SBIconViewDelegate.h"

@class NSArray, NSLayoutConstraint, NSMutableArray, NSString, SBCommandTabSettings, SBIconModel, SBIconView, UIImageView, UIView, _UIBackdropView, _UIBackdropViewSettings;

@interface SBCommandTabViewController : UIViewController <SBIconViewDelegate>
{
    NSArray *_switcherDisplayItems;
    unsigned long long _selectedIndex;
    SBIconModel *_iconModel;
    NSMutableArray *_iconViews;
    _UIBackdropViewSettings *_blurSettings;
    _UIBackdropView *_backgroundBackdropView;
    UIView *_blurredBackgroundView;
    UIImageView *_commandTabBackgroundBarMask;
    UIImageView *_selectionSquareView;
    SBIconView *_selectedIconView;
    NSLayoutConstraint *_selectionXLayoutConstraint;
    SBCommandTabSettings *_settings;
    id <SBCommandTabViewControllerDelegate> _delegate;
}

@property(nonatomic) id <SBCommandTabViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic, getter=_selectionXLayoutConstraint, setter=_setSelectionXLayoutConstraint:) NSLayoutConstraint *selectionXLayoutConstraint; // @synthesize selectionXLayoutConstraint=_selectionXLayoutConstraint;
@property(retain, nonatomic, getter=_selectedIconView, setter=_setSelectedIconView:) SBIconView *selectedIconView; // @synthesize selectedIconView=_selectedIconView;
@property(retain, nonatomic, getter=_selectionSquareView, setter=_setSelectionSquareView:) UIImageView *selectionSquareView; // @synthesize selectionSquareView=_selectionSquareView;
@property(retain, nonatomic, getter=_commandTabBackgroundBarMask, setter=_setCommandTabBackgroundBarMask:) UIImageView *commandTabBackgroundBarMask; // @synthesize commandTabBackgroundBarMask=_commandTabBackgroundBarMask;
@property(retain, nonatomic, getter=_blurredBackgroundView, setter=_setBlurredBackgroundView:) UIView *blurredBackgroundView; // @synthesize blurredBackgroundView=_blurredBackgroundView;
@property(retain, nonatomic, getter=_backgroundBackdropView, setter=_setBackgroundBackdropView:) _UIBackdropView *backgroundBackdropView; // @synthesize backgroundBackdropView=_backgroundBackdropView;
@property(retain, nonatomic, getter=_blurSettings, setter=_setBlurSettings:) _UIBackdropViewSettings *blurSettings; // @synthesize blurSettings=_blurSettings;
- (void)_handleKeyUIEvent:(id)arg1;
- (void)_handleShiftCommandTab:(id)arg1;
- (void)_handleCommandTab:(id)arg1;
- (void)_layoutAppIcons;
- (void)_moveSelectionSquareToIconAtIndex:(unsigned long long)arg1;
- (_Bool)canBecomeFirstResponder;
- (void)didReceiveMemoryWarning;
- (id)selectedApplicationBundleID;
- (void)previous;
- (void)next;
- (void)showCommandTabBar;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class FBDisplayLayoutElement, FBSDisplayIdentity, SBLayoutElement, SBLayoutState, SBOrientationTransformWrapperView, UIView;

@interface SBLayoutElementViewController : UIViewController
{
    SBOrientationTransformWrapperView *_contentWrapperView;
    FBDisplayLayoutElement *_displayLayoutElement;
    _Bool _isViewVisible;
    _Bool _isTransitioningVisibility;
    _Bool _emulatesAsynchronousRendering;
    UIView *_contentContainerView;
    FBSDisplayIdentity *_displayIdentity;
    SBLayoutElement *_layoutElement;
    SBLayoutState *_layoutState;
    unsigned long long _supportedContentInterfaceOrientations;
    long long _contentWrapperInterfaceOrientation;
    struct CGRect _referenceFrame;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *_contentContainerView; // @synthesize _contentContainerView;
@property(nonatomic, getter=_isEmulatingAsynchronousRendering, setter=_setEmulatesAsynchronousRendering:) _Bool _emulatesAsynchronousRendering; // @synthesize _emulatesAsynchronousRendering;
- (id)_newDisplayLayoutElementForEntity:(id)arg1;
@property(readonly, nonatomic) _Bool _shouldDisplayLayoutElementBecomeActive;
- (void)_updateDisplayLayoutElementVisibility;
- (void)_updateDisplayLayoutElementWithBuilder:(CDUnknownBlockType)arg1;
- (void)configureWithWorkspaceEntity:(id)arg1 forLayoutElement:(id)arg2 layoutState:(id)arg3 referenceFrame:(struct CGRect)arg4;
@property(nonatomic) long long contentWrapperInterfaceOrientation; // @synthesize contentWrapperInterfaceOrientation=_contentWrapperInterfaceOrientation;
- (void)dealloc;
- (void)didEndTransitionToVisible:(_Bool)arg1;
@property(readonly, nonatomic) FBSDisplayIdentity *displayIdentity; // @synthesize displayIdentity=_displayIdentity;
- (id)initWithCoder:(id)arg1;
- (id)initWithDisplayIdentity:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)invalidate;
@property(readonly, nonatomic) SBLayoutElement *layoutElement; // @synthesize layoutElement=_layoutElement;
@property(readonly, nonatomic) SBLayoutState *layoutState; // @synthesize layoutState=_layoutState;
- (void)loadView;
- (id)mainWorkspaceApplicationSceneLayoutElementViewController;
- (void)prepareForReuse;
@property(readonly, nonatomic) struct CGRect referenceFrame; // @synthesize referenceFrame=_referenceFrame;
@property(readonly, nonatomic) unsigned long long supportedContentInterfaceOrientations; // @synthesize supportedContentInterfaceOrientations=_supportedContentInterfaceOrientations;
@property(readonly, nonatomic) _Bool supportsReuse;
- (void)willBeginTransitionToVisible:(_Bool)arg1;

@end


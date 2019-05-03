//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardViewControllerBase.h"

#import "SBDashBoardEventHandling.h"

@class NSString, SBDashBoardUserPictureView, UMUser;

@interface SBDashBoardUserPictureViewController : SBDashBoardViewControllerBase <SBDashBoardEventHandling>
{
    UMUser *_user;
    SBDashBoardUserPictureView *_userPictureView;
}

+ (_Bool)isUserPictureSupported;
+ (Class)viewClass;
- (void).cxx_destruct;
- (void)aggregateAppearance:(id)arg1;
- (_Bool)handleEvent:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (long long)presentationPriority;
- (long long)presentationStyle;
- (long long)presentationType;
- (id)view;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

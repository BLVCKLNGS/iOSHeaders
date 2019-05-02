//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBDashBoardNotificationAlertingController.h"
#import "SBDashBoardNotificationDispatcher.h"
#import "SBNotificationDestination.h"

@class NSString, SBDashBoardBehavior, SBNCAlertingController;

@interface SBDashBoardNotificationDispatcher : NSObject <SBDashBoardNotificationAlertingController, SBNotificationDestination, SBDashBoardNotificationDispatcher>
{
    _Bool _active;
    id <SBDashBoardNotificationDestination> _modalDestination;
    id <SBDashBoardNotificationDestination> _listDestination;
    SBDashBoardBehavior *_activeBehavior;
    SBNCAlertingController *_alertingController;
    id <NCNotificationDestinationDelegate> _notificationDestinationDelegate;
}

- (void).cxx_destruct;
- (void)_clearNotificationRequestsFromDashBoard:(id)arg1;
@property(retain, nonatomic) SBDashBoardBehavior *activeBehavior; // @synthesize activeBehavior=_activeBehavior;
@property(nonatomic) __weak SBNCAlertingController *alertingController; // @synthesize alertingController=_alertingController;
- (id)alertingControllerForDestination:(id)arg1;
- (_Bool)canReceiveNotificationRequest:(id)arg1;
@property(readonly, copy, nonatomic) NSString *dashBoardIdentifier;
@property(nonatomic) __weak id <NCNotificationDestinationDelegate> delegate; // @synthesize delegate=_notificationDestinationDelegate;
- (void)destination:(id)arg1 clearNotificationRequests:(id)arg2;
- (void)destination:(id)arg1 clearNotificationRequestsFromDate:(id)arg2 toDate:(id)arg3 inSections:(id)arg4;
- (void)destination:(id)arg1 clearNotificationRequestsInSections:(id)arg2;
- (void)destination:(id)arg1 performAction:(id)arg2 forNotificationRequest:(id)arg3 requestAuthentication:(_Bool)arg4 withParameters:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)destination:(id)arg1 requestPermissionToExecuteAction:(id)arg2 forNotificationRequest:(id)arg3 withParameters:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)destination:(id)arg1 settingsForSectionIdentifier:(id)arg2;
- (_Bool)dismissNotificationInLongLookAnimated:(_Bool)arg1;
@property(readonly, nonatomic) NSString *identifier;
- (_Bool)interceptsQueueRequest:(id)arg1;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (_Bool)isNotificationContentExtensionVisible:(id)arg1;
- (_Bool)isPresentingNotificationInLongLook;
@property(nonatomic) __weak id <SBDashBoardNotificationDestination> listDestination; // @synthesize listDestination=_listDestination;
@property(nonatomic) __weak id <SBDashBoardNotificationDestination> modalDestination; // @synthesize modalDestination=_modalDestination;
- (void)modifyNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (id)notificationSectionSettingsForDestination:(id)arg1;
@property(readonly, nonatomic) long long participantState;
- (void)postNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;
- (void)stopAllRealerts;
- (void)updateNotificationSectionSettings:(id)arg1;
- (void)withdrawNotificationRequest:(id)arg1 forCoalescedNotification:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


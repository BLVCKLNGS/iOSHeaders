/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "_SBUIWidgetHost.h"

@class NSString, _SBUIWidgetViewController;
@protocol SBWidgetViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface SBAttributionWrapperViewController : XXUnknownSuperclass <_SBUIWidgetHost> {
	_SBUIWidgetViewController* _attributionViewController;
	id<SBWidgetViewControllerDelegate> _widgetDelegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) id<SBWidgetViewControllerDelegate> widgetDelegate;
+(id)_newAttributionViewController;
+(id)_loadAttributionAppBundle;
-(void)invalidatePreferredViewSize;
-(void)requestLaunchOfURL:(id)url;
-(void)requestPresentationOfViewController:(id)viewController presentationStyle:(int)style context:(id)context completion:(id)completion;
-(void)setVisibleWidgetsIDs:(id)ids;
-(void)viewDidLoad;
-(void)dealloc;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end


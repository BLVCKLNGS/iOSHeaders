/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableSet;
@protocol SBSearchResultsActionManagerDelegate;

__attribute__((visibility("hidden")))
@interface SBSearchResultsActionManager : XXUnknownSuperclass {
	id<SBSearchResultsActionManagerDelegate> _delegate;
	NSMutableSet* _currentActions;
}
@property(readonly, assign, nonatomic) NSMutableSet* currentActions;
@property(readonly, assign) BOOL hasCurrentAction;
@property(assign) id<SBSearchResultsActionManagerDelegate> delegate;
-(void)cancelCurrentActionAnimated:(BOOL)animated withCompletionBlock:(id)completionBlock;
-(id)_actionForResult:(id)result inSection:(id)section;
-(id)_performAction:(id)action completionBlock:(id)block;
-(id)_performActionForResult:(id)result inSection:(id)section urls:(id)urls forceDefaultAction:(BOOL)action completionBlock:(id)block;
-(void)performCustomActionWithViewController:(id)viewController;
-(id)performActionForResult:(id)result inSection:(id)section;
@end


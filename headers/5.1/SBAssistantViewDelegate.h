/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SBAssistantViewDelegate <NSObject>
-(void)assistantViewSearchScrolledToView:(id)view;
-(void)assistantView:(id)view madeRequest:(id)request;
-(void)assistantViewAnimatedIn:(id)anIn;
-(void)assistantViewAnimatedOut:(id)anOut;
-(float)assistantViewAudioLevel:(id)level;
-(BOOL)assistantViewAffectsMagicPocket:(int)pocket;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Springboard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class AFUIUtteranceView;

@interface SBAssistantGuideSectionListCell : XXUnknownSuperclass {
	AFUIUtteranceView* _bubbleView;
	CGSize _currentSize;
}
-(id)initWithReuseIdentifier:(id)reuseIdentifier;
-(void)setSelected:(BOOL)selected animated:(BOOL)animated;
-(void)dealloc;
-(void)setPhrase:(id)phrase;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)layoutSubviews;
-(float)currentHeight;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Springboard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage;

@interface SBBatteryReflectionView : XXUnknownSuperclass {
	UIImage* _image;
	UIImage* _maskImage;
	float _bottomMargin;
}
-(id)initWithImage:(id)image bottomMargin:(float)margin;
-(void)dealloc;
-(void)setImage:(id)image;
-(void)drawRect:(CGRect)rect;
@end


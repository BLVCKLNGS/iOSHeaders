/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Springboard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView;

@interface SBDownloadingProgressBar : XXUnknownSuperclass {
	UIImageView* _clipView;
	UIImageView* _fillView;
	float _progress;
}
+(float)defaultHeight;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(id)trackImage;
-(id)fillImage;
-(void)setProgress:(float)progress;
-(float)progress;
-(void)updateFill;
@end


/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Springboard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SBIconLabelProperties;

@interface SBIconLabelImage : XXUnknownSuperclass {
	SBIconLabelProperties* _properties;
	int _referenceCount;
}
@property(readonly, retain, nonatomic) SBIconLabelProperties* properties;
@property(assign, nonatomic) int referenceCount;
-(id)initWithCGImage:(CGImageRef)cgimage scale:(float)scale orientation:(int)orientation properties:(id)sproperties;
-(void)dealloc;
@end


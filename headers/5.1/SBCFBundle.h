/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Springboard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface SBCFBundle : XXUnknownSuperclass {
	CFBundleRef _cfBundle;
}
-(id)initWithPath:(id)path;
-(id)initWithCFBundle:(CFBundleRef)cfbundle;
-(void)dealloc;
-(id)executablePath;
-(id)bundleIdentifier;
-(id)pathForResource:(id)resource ofType:(id)type;
-(id)localizedStringForKey:(id)key value:(id)value table:(id)table;
-(id)infoDictionary;
-(id)localizedInfoDictionary;
-(CFBundleRef)cfBundle;
@end


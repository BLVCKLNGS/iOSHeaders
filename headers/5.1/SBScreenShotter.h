/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


@interface SBScreenShotter : XXUnknownSuperclass {
	BOOL _writingScreenshot;
}
@property(assign) BOOL writingScreenshot;
+(id)sharedInstance;
-(void)finishedWritingScreenshot:(id)screenshot didFinishSavingWithError:(id)error context:(void*)context;
-(void)saveScreenshot:(BOOL)screenshot;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "_SBScreenshotProvider.h"

@class NSString, SBScreenFlash, UIScreen;

@interface _SBDefaultScreenshotProvider : NSObject <_SBScreenshotProvider>
{
    UIScreen *_screen;
    SBScreenFlash *_flasher;
}

- (void).cxx_destruct;
- (id)captureScreenshot;
@property(readonly, nonatomic) SBScreenFlash *flasher; // @synthesize flasher=_flasher;
- (id)initWithScreen:(id)arg1;
@property(readonly, nonatomic) UIScreen *screen; // @synthesize screen=_screen;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


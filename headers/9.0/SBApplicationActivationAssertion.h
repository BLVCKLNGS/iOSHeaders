//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SBApplication;

@interface SBApplicationActivationAssertion : NSObject
{
    SBApplication *_app;
    NSString *_name;
}

@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, retain, nonatomic) SBApplication *application; // @synthesize application=_app;
- (void)dealloc;
- (id)initWithApplication:(id)arg1 name:(id)arg2;

@end


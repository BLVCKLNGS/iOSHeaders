/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface SBTransientSettings : NSObject
{
    NSMutableDictionary *_transientSettings;
    BOOL _dirty;
}

+ (id)sharedInstance;
- (void)_load;
- (id)_path;
- (void)save;
- (void)reload;
- (id)objectForKey:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBApplicationServerDelegate.h"

@class NSArray, NSString, SBApplicationServer;

@protocol SBApplicationServerShortcutDelegate <SBApplicationServerDelegate>
- (void)applicationServer:(SBApplicationServer *)arg1 client:(id <FBSystemServiceClient>)arg2 fetchApplicationShortcutItemsOfTypes:(unsigned long long)arg3 forBundleIdentifier:(NSString *)arg4 withCompletion:(void (^)(SBSApplicationShortcutServiceFetchResult *))arg5;
- (void)applicationServer:(SBApplicationServer *)arg1 client:(id <FBSystemServiceClient>)arg2 setDynamicApplicationShortcutItems:(NSArray *)arg3 forBundleIdentifier:(NSString *)arg4;
@end


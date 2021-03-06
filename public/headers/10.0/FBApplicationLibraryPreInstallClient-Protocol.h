//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBApplicationLibraryObserver-Protocol.h"

@class FBApplicationLibrary, NSArray;

@protocol FBApplicationLibraryPreInstallClient <FBApplicationLibraryObserver>

@optional
- (void)applicationLibrary:(FBApplicationLibrary *)arg1 _willNotify_didDemoteApplications:(NSArray *)arg2 completion:(void (^)(void))arg3;
- (void)applicationLibrary:(FBApplicationLibrary *)arg1 _willNotify_didRemoveApplications:(NSArray *)arg2 completion:(void (^)(void))arg3;
- (void)applicationLibrary:(FBApplicationLibrary *)arg1 _willNotify_didReplaceApplications:(NSArray *)arg2 withApplications:(NSArray *)arg3 completion:(void (^)(void))arg4;
- (void)applicationLibrary:(FBApplicationLibrary *)arg1 _willNotify_didAddApplications:(NSArray *)arg2 completion:(void (^)(void))arg3;
- (void)applicationLibrary:(FBApplicationLibrary *)arg1 _willNotify_didCancelPlaceholders:(NSArray *)arg2 completion:(void (^)(void))arg3;
- (void)applicationLibrary:(FBApplicationLibrary *)arg1 _willNotify_didAddPlaceholders:(NSArray *)arg2 completion:(void (^)(void))arg3;
@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBIcon, SBIconListModel;

@protocol SBIconListModelObserver <NSObject>
- (void)iconList:(SBIconListModel *)arg1 didRemoveIcon:(SBIcon *)arg2;
- (void)iconList:(SBIconListModel *)arg1 didReplaceIcon:(SBIcon *)arg2 withIcon:(SBIcon *)arg3;
- (void)iconList:(SBIconListModel *)arg1 didAddIcon:(SBIcon *)arg2;
@end


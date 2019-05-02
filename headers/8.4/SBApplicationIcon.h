//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBLeafIcon.h"

@class UIImage;

@interface SBApplicationIcon : SBLeafIcon
{
    UIImage *_cachedSquareHomeScreenContentsImage;
}

+ (id)_squareHomeScreenIconImagesMemoryPool;
- (id)folderFallbackTitle;
- (id)folderTitleOptions;
- (void)setBadge:(id)arg1;
- (id)automationID;
- (id)tags;
- (id)getUnmaskedIconImage:(int)arg1;
- (id)__loadUnmaskedIconImageForFormat:(int)arg1;
- (id)generateIconImage:(int)arg1;
- (void)generateIconImageInBackground:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_blockForGeneratingIconImageInBackgroundWithFormat:(int)arg1 complete:(CDUnknownBlockType)arg2;
- (id)__loadIconImageForDataSource:(id)arg1 format:(int)arg2;
- (id)application;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithApplication:(id)arg1;

@end


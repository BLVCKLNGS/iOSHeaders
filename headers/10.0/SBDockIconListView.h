//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBRootIconListView.h"

@interface SBDockIconListView : SBRootIconListView
{
}

+ (unsigned long long)iconRowsForInterfaceOrientation:(long long)arg1;
+ (unsigned long long)iconColumnsForInterfaceOrientation:(long long)arg1;
+ (unsigned long long)iconColumnsOrRows;
+ (double)defaultHeight;
- (unsigned long long)columnAtPoint:(struct CGPoint)arg1;
- (struct CGPoint)originForIconAtCoordinate:(struct SBIconCoordinate)arg1;
- (double)_additionalVerticalInsetToCenterIcons;
- (double)_additionalHorizontalInsetToCenterIcons;
- (unsigned long long)rowAtPoint:(struct CGPoint)arg1;
- (id)iconAtPoint:(struct CGPoint)arg1 index:(unsigned long long *)arg2 proposedOrder:(int *)arg3 grabbedIcon:(id)arg4;
- (double)sideIconInset;
- (double)bottomIconInset;
- (double)topIconInset;
- (unsigned long long)iconsInColumnForSpacingCalculation;
- (unsigned long long)iconsInRowForSpacingCalculation;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (int)iconLocation;
- (id)initWithModel:(id)arg1 orientation:(long long)arg2 viewMap:(id)arg3;

@end

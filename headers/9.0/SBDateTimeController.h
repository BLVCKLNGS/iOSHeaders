//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSHashTable;

@interface SBDateTimeController : NSObject
{
    NSDate *_overrideDate;
    NSHashTable *_observers;
}

+ (id)sharedInstance;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(copy, nonatomic) NSDate *overrideDate;
@property(readonly, copy, nonatomic) NSDate *currentDate;
- (void)dealloc;
- (id)init;

@end


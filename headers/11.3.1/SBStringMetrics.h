//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFastEnumeration.h"

@class NSMutableArray;

@interface SBStringMetrics : NSObject <NSFastEnumeration>
{
    NSMutableArray *_fragments;
}

- (void).cxx_destruct;
- (void)addFragment:(id)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)description;
- (unsigned long long)fragmentCount;
- (id)fragments;
- (id)init;

@end


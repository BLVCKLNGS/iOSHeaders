//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SBPowerAssertionContext : NSObject
{
    NSString *_processName;
    CDUnknownBlockType _collectionFn;
}

@property(copy, nonatomic) CDUnknownBlockType collectionFn; // @synthesize collectionFn=_collectionFn;
@property(copy, nonatomic) NSString *processName; // @synthesize processName=_processName;
- (void).cxx_destruct;

@end


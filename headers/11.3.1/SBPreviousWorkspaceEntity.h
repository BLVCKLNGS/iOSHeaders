//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBWorkspaceEntity.h"

@interface SBPreviousWorkspaceEntity : SBWorkspaceEntity
{
    long long _previousLayoutRole;
}

+ (id)entityWithPreviousLayoutRole:(long long)arg1;
- (id)initWithIdentifier:(id)arg1 displayChangeSettings:(id)arg2;
- (id)initWithPreviousLayoutRole:(long long)arg1;
- (_Bool)isPreviousWorkspaceEntity;
@property(readonly, nonatomic) long long previousLayoutRole; // @synthesize previousLayoutRole=_previousLayoutRole;

@end


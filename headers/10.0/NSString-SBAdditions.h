//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (SBAdditions)
- (_Bool)sb_containsEmoji;
- (id)_adjustedFontForScripts:(long long)arg1 forFont:(id)arg2 withPointAdjustment:(double)arg3 ignoringContent:(_Bool)arg4;
- (_Bool)_isInScript:(long long)arg1 useLocaleOnly:(_Bool)arg2;
- (id)_adjustedFontForScripts:(long long)arg1 forFont:(id)arg2 ignoringContent:(_Bool)arg3;
- (id)_adjustedFontForScripts:(long long)arg1 forFont:(id)arg2 withPointAdjustment:(double)arg3;
- (id)_adjustedFontForScripts:(long long)arg1 forFont:(id)arg2;
- (_Bool)_isEntirelyCommon;
- (_Bool)_isEntirelyCharactersInScript:(long long)arg1;
- (_Bool)sb_isEntirelyCharactersInSet:(struct USet *)arg1;
@end


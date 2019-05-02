//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIColor;

@interface SBControlColorSettings : NSObject
{
    UIColor *_tintColor;
    UIColor *_selectedTintColor;
    UIColor *_textColor;
    UIColor *_selectedTextColor;
}

+ (id)settingsWithTintColor:(id)arg1 selectedTintColor:(id)arg2 textColor:(id)arg3 selectedTextColor:(id)arg4;
- (void).cxx_destruct;
- (id)initWithTintColor:(id)arg1 selectedTintColor:(id)arg2 textColor:(id)arg3 selectedTextColor:(id)arg4;
@property(readonly, nonatomic) UIColor *selectedTextColor; // @synthesize selectedTextColor=_selectedTextColor;
@property(readonly, nonatomic) UIColor *selectedTintColor; // @synthesize selectedTintColor=_selectedTintColor;
@property(readonly, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(readonly, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;

@end


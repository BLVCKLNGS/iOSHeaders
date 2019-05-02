//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILongPressGestureRecognizer.h"

@class UIPressesEvent;

@interface SBLongPressGestureRecognizer : UILongPressGestureRecognizer
{
    UIPressesEvent *_latestPressesEvent;
}

@property(readonly, nonatomic) UIPressesEvent *latestPressesEvent; // @synthesize latestPressesEvent=_latestPressesEvent;
- (void).cxx_destruct;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "UINavigationControllerDelegate-Protocol.h"

@class NSString;

@interface SBSearchEtceteraNavigationController : UINavigationController <UINavigationControllerDelegate>
{
    _Bool _shouldUnderlapNavigationBar;
    _Bool _shouldAllowVisibleSeparator;
}

@property(nonatomic) _Bool shouldAllowVisibleSeparator; // @synthesize shouldAllowVisibleSeparator=_shouldAllowVisibleSeparator;
@property(nonatomic) _Bool shouldUnderlapNavigationBar; // @synthesize shouldUnderlapNavigationBar=_shouldUnderlapNavigationBar;
- (void)_updateEdgesForExtendedLayoutForViewController:(id)arg1 underlapNavBar:(_Bool)arg2;
- (double)_statusBarHeightAdjustmentForCurrentOrientation;
- (void)setBlurProgress:(double)arg1 animated:(_Bool)arg2;
- (void)setSeparatorVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class NSLayoutConstraint, SBSearchResultsActionManager, UITextView;

@interface SBSearchFirstTimeViewController : UIViewController
{
    SBSearchResultsActionManager *_actionManager;
    UITextView *_textView;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_interspaceConstraint;
    NSLayoutConstraint *_marginConstraint;
}

+ (id)viewController;
@property NSLayoutConstraint *marginConstraint; // @synthesize marginConstraint=_marginConstraint;
@property NSLayoutConstraint *interspaceConstraint; // @synthesize interspaceConstraint=_interspaceConstraint;
@property NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property UITextView *textView; // @synthesize textView=_textView;
@property SBSearchResultsActionManager *actionManager; // @synthesize actionManager=_actionManager;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)viewDidLoad;
- (void)dealloc;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@interface SBCollectionViewCell : UICollectionViewCell
{
    _Bool _performSetHighlighted;
    _Bool _protectDelayedUnhighlights;
    id <SBCollectionViewCellDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)_didSetHighlighted:(_Bool)arg1;
- (void)_performSetHighlighted;
@property(nonatomic) __weak id <SBCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)prepareForReuse;
@property(nonatomic) _Bool protectDelayedUnhighlights; // @synthesize protectDelayedUnhighlights=_protectDelayedUnhighlights;
- (void)setHighlighted:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1 afterDelay:(double)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer, UIColor, UIImage;

@interface SBTintedImageProvider : NSObject
{
    UIImage *_tintedImage;
    CALayer *_tintedLayer;
    _Bool _wantsTintedLayer;
    UIImage *_originalImage;
    UIColor *_tintColor;
}

@property(nonatomic) _Bool wantsTintedLayer; // @synthesize wantsTintedLayer=_wantsTintedLayer;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) UIImage *originalImage; // @synthesize originalImage=_originalImage;
- (void).cxx_destruct;
- (void)_createOrUpdateTintedImageOrLayer;
@property(readonly, nonatomic) __weak CALayer *tintedLayer;
@property(readonly, nonatomic) __weak UIImage *tintedImage;

@end

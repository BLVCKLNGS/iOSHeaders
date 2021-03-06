//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UIRemoteViewController.h"

#import "SBSUIRemoteAlertItemContentHostInterface.h"

@class NSString;

@interface _SBRemoteAlertContentHostViewController : _UIRemoteViewController <SBSUIRemoteAlertItemContentHostInterface>
{
    id _delegate;
    NSString *_serviceClassName;
    _Bool _serviceHasSetPreferredContentSize;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
- (void).cxx_destruct;
- (void)_getPreferredContentSizeWithReplyBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (id)description;
@property(copy, nonatomic) NSString *serviceClassName; // @synthesize serviceClassName=_serviceClassName;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end


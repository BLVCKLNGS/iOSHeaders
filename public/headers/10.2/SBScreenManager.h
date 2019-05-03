//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, NSMutableDictionary;

@interface SBScreenManager : NSObject
{
    NSHashTable *_handlers;
    NSMutableDictionary *_displayToHandlerMap;
    NSMutableDictionary *_displayToScreenMap;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)addConnectionHandler:(id)arg1;
- (void)_screenDidDisconnect:(id)arg1;
- (void)_screenDidConnect:(id)arg1;
- (void)_updateHandlerForConnectionToScreen:(id)arg1 withDisplay:(id)arg2;
- (id)init;

@end

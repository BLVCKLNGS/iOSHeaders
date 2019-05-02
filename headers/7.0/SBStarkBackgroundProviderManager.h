/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSHashTable, NSMutableDictionary, NSMutableArray;

__attribute__((visibility("hidden")))
@interface SBStarkBackgroundProviderManager : XXUnknownSuperclass {
	NSMutableArray* _providersByPriority;
	NSMutableDictionary* _providersByServiceName;
	NSHashTable* _observers;
}
-(void)_notifyRemove:(id)remove;
-(void)_notifyAdd:(id)add;
-(void)removeObserver:(id)observer;
-(void)addObserver:(id)observer;
-(void)removeBackgroundProviderWithServiceName:(id)serviceName;
-(void)removeBackgroundProvider:(id)provider;
-(void)addBackgroundProvider:(id)provider;
-(id)activeProvider;
-(void)dealloc;
-(id)init;
@end


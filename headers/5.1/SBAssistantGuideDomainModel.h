/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSString, NSArray;

@interface SBAssistantGuideDomainModel : XXUnknownSuperclass {
	NSString* _name;
	NSString* _tagPhrase;
	NSString* _displayIdentifier;
	NSString* _bundleIdentifier;
	NSMutableArray* _requiredApps;
	NSMutableArray* _requiredCapabilities;
	NSString* _sectionFilename;
	NSMutableArray* _sections;
}
@property(retain, nonatomic) NSString* name;
@property(retain, nonatomic) NSString* tagPhrase;
@property(retain, nonatomic) NSString* displayIdentifier;
@property(retain, nonatomic) NSString* bundleIdentifier;
@property(retain, nonatomic) NSArray* requiredApps;
@property(retain, nonatomic) NSArray* requiredCapabilities;
@property(retain, nonatomic) NSString* sectionFilename;
@property(readonly, retain, nonatomic) NSArray* sections;
-(id)init;
-(void)dealloc;
@end


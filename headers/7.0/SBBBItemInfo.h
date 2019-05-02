/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface SBBBItemInfo : XXUnknownSuperclass {
	id _representedObject;
}
@property(readonly, assign, nonatomic) NSString* identifier;
@property(readonly, assign, nonatomic) id representedObject;
+(id)infoWithRepresentedObject:(id)representedObject;
-(id)description;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)invalidateCachedLayoutData;
-(float)heightForReusableViewInTableView:(id)tableView;
-(void)populateReusableView:(id)view;
-(Class)reusableViewClass;
-(void)dealloc;
-(id)initWithRepresentedObject:(id)representedObject;
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBBBBulletinInfo.h"
#import "SpringBoard-Structs.h"

@class UIColor, SBNotificationsSectionInfo, UIImage;

__attribute__((visibility("hidden")))
@interface SBNotificationsBulletinInfo : SBBBBulletinInfo {
	SBNotificationsSectionInfo* _sectionInfo;
	float _heightForReusableView;
	CGSize _referenceSize;
	UIImage* _icon;
	UIImage* _attachmentImage;
	CGSize _attachmentImageSize;
	float _secondaryTextHeight;
	BOOL _suppressingMessageForPrivacy;
	BOOL _isCachedMessageSuppressionValid;
	UIColor* _secondaryTextColor;
}
@property(readonly, assign, nonatomic, getter=isSuppressingMessageForPrivacy) BOOL suppressingMessageForPrivacy;
@property(assign, nonatomic) CGSize attachmentImageSize;
@property(retain, nonatomic) UIImage* attachmentImage;
@property(readonly, assign, nonatomic) UIColor* secondaryTextColor;
@property(retain, nonatomic) UIImage* icon;
@property(retain, nonatomic) SBNotificationsSectionInfo* sectionInfo;
-(void)populateReusableView:(id)view;
-(float)heightForReusableViewInTableView:(id)tableView;
-(BOOL)_isLayoutValidWithReferenceSize:(CGSize)referenceSize;
-(CGSize)_effectiveAttachmentImageSize;
-(id)_attachmentImageToDisplay;
-(id)_eventDateLabelForDisplay;
-(id)_eventDateLabel;
-(void)_configureEventDateLabel:(id)label;
-(id)_relevanceDateLabel;
-(void)_configureRelevanceDateLabel:(id)label;
-(XXStruct_Xx1ZfA)_relevanceDateLabelDescription;
-(id)_endDate;
-(id)_secondaryTextColor;
-(id)_secondaryTextToDisplay;
-(id)_secondaryText;
-(id)_subtitleTextColor;
-(id)_subtitleTextToDisplay;
-(id)_subtitleText;
-(id)_relevanceDateTextColor;
-(id)_primaryTextColor;
-(id)_primaryText;
-(void)invalidateCachedLayoutData;
-(Class)reusableViewClass;
-(id)identifier;
-(void)dealloc;
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBLeafIcon.h"

@class SBApplicationPlaceholder;

__attribute__((visibility("hidden")))
@interface SBDownloadingIcon : SBLeafIcon {
	BOOL _wasUninstalledByUser;
	BOOL _isNewsstandDownload;
	SBApplicationPlaceholder* _appPlaceholder;
}
+(id)leafIdentifierForApplicationPlaceholder:(id)applicationPlaceholder;
+(id)leafIdentifierForApplicationPlaceholderBundleID:(id)applicationPlaceholderBundleID;
-(void)cancelDownload;
-(BOOL)iconAppearsInNewsstand;
-(void)_showAlertForError:(id)error;
-(id)uninstallAlertCancelTitle;
-(id)uninstallAlertConfirmTitle;
-(id)uninstallAlertBody;
-(id)uninstallAlertTitle;
-(void)setUninstalledByUser:(BOOL)user;
-(BOOL)uninstalledByUser;
-(void)setNewsstandDownload:(BOOL)download;
-(BOOL)isNewsstandDownload;
-(BOOL)matchesApplicationIcon:(id)icon;
-(id)appPlaceholder;
-(void)setApplicationPlaceholder:(id)placeholder;
-(void)reloadForStatusChange;
-(void)completeUninstall;
-(id)realDisplayName;
-(id)homescreenIconImage;
-(id)_darkenedIconImageForImage:(id)image;
-(id)gridCellImage;
-(id)identifierForCorrespondingApplicationIcon;
-(id)description;
-(id)representation;
-(BOOL)matchesRepresentation:(id)representation;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)initWithApplicationPlaceholder:(id)applicationPlaceholder;
@end


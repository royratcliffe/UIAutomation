/* PrivateFrameworks/UIAutomation.framework
 *
 * Copyright © 2012, Apple Inc. All rights reserved.
 *
 ******************************************************************************/

#import <UIAutomation/UIAElement.h>

@class UIAElementArray;

@interface UIAApplication : UIAElement
{
	UIAElementArray *_windows;
	NSString *_name;
	NSString *_bundleID;
	NSString *_bundlePath;
	NSString *_axBundlePath;
	NSString *_version;
	NSString *_bundleVersion;
	const void *_privateRef;
}

+ (id)attributeKeys;
+ (id)toManyRelationshipKeys;
+ (id)toOneRelationshipKeys;
- (id)_axBundle;
- (id)_axBundlePath;
- (id)_axMainWindow;
- (id)_bundle;
- (id)_bundleID;
- (id)_bundlePath;
- (void)_invalidate;
- (id)_name;
- (unsigned int)_state;
- (id)actionSheet;
- (id)activityView;
- (id)alert;
- (id)bundleID;
- (id)bundlePath;
- (id)bundleVersion;
- (void)dealloc;
- (id)editingMenu;
- (id)init;
- (int)interfaceOrientation;
- (id)isCameraIrisOpen;
- (id)isVisible;
- (id)keyWindow;
- (id)keyboard;
- (id)localizedStringForKey:(id)arg1;
- (id)localizedStringForKey:(id)arg1 withOptions:(id)arg2;
- (id)mainWindow;
- (id)name;
- (id)navigationBar;
- (id)preferencesValueForKey:(id)arg1;
- (id)scriptingSynonymStrings;
- (void)setPreferencesValue:(id)arg1 forKey:(id)arg2;
- (id)stateDescription;
- (id)statusBar;
- (id)switcherScrollView;
- (id)tabBar;
- (id)toolbar;
- (id)version;
- (id)windows;

@end

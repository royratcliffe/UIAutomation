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
	void *_privateRef;
}

+ (id)attributeKeys;
+ (id)toOneRelationshipKeys;
+ (id)toManyRelationshipKeys;
- (id)init;
- (void)dealloc;
- (void)_invalidate;
- (id)name;
- (id)bundlePath;
- (id)_bundle;
- (id)version;
- (id)bundleVersion;
- (id)bundleID;
- (id)stateDescription;
- (id)isVisible;
- (id)isCameraIrisOpen;
- (void)setPreferencesValue:(id)arg1 forKey:(id)arg2;
- (id)preferencesValueForKey:(id)arg1;
- (int)interfaceOrientation;
- (id)windows;
- (id)keyWindow;
- (id)_axMainWindow;
- (id)mainWindow;
- (id)keyboard;
- (id)actionSheet;
- (id)alert;
- (id)statusBar;
- (id)editingMenu;
- (id)switcherScrollView;
- (id)navigationBar;
- (id)tabBar;
- (id)toolbar;
- (id)scriptingSynonymStrings;

@end

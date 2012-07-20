/* PrivateFrameworks/UIAutomation.framework
 *
 * Copyright © 2012, Apple Inc. All rights reserved.
 *
 ******************************************************************************/

#import <UIAutomation/UIAElement.h>

@class UIScreen;

@interface UIAScreen : UIAElement
{
	UIScreen *_uiScreen;
}

+ (id)attributeKeys;
- (id)_initWithUIScreen:(id)arg1 parent:(id)arg2;
- (void)dealloc;
- (id)_uiScreen;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)bounds;
- (id)scale;
- (id)applicationFrame;
- (id)_uiaApplicationFrame;
- (id)uiScreen;

@end

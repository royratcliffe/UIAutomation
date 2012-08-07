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
- (id)_uiScreen;
- (id)_uiaApplicationFrame;
- (id)applicationFrame;
- (id)bounds;
- (id)brightness;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)scale;
- (void)setBrightness:(id)arg1;
- (id)uiScreen;

@end

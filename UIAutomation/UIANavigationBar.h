/* PrivateFrameworks/UIAutomation.framework
 *
 * Copyright © 2012, Apple Inc. All rights reserved.
 *
 ******************************************************************************/

#import <UIAutomation/UIAElement.h>

@interface UIANavigationBar : UIAElement

+ (id)_moreToOneRelationshipKeys;
+ (id)toOneRelationshipKeys;
- (id)name;
- (id)leftButton;
- (id)rightButton;
- (BOOL)_navBarShouldAcceptAXElement:(id)arg1;
- (UIAElementArray *)elements;

@end

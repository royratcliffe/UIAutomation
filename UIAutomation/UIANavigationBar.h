/* PrivateFrameworks/UIAutomation.framework
 *
 * Copyright © 2012, Apple Inc. All rights reserved.
 *
 ******************************************************************************/

#import <UIAutomation/UIAElement.h>

@interface UIANavigationBar : UIAElement

+ (id)_moreToOneRelationshipKeys;
+ (id)toOneRelationshipKeys;
- (BOOL)_navBarShouldAcceptAXElement:(id)arg1;
- (id)elements;
- (id)leftButton;
- (id)name;
- (id)rightButton;

@end

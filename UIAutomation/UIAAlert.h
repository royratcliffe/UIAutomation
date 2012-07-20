/* PrivateFrameworks/UIAutomation.framework
 *
 * Copyright © 2012, Apple Inc. All rights reserved.
 *
 ******************************************************************************/

#import <UIAutomation/UIAElement.h>

@interface UIAAlert : UIAElement
{
}

+ (id)_moreToOneRelationshipKeys;
+ (id)toOneRelationshipKeys;
- (id)name;
- (id)cancelButton;
- (id)defaultButton;

@end

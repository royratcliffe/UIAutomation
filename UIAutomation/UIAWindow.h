/* PrivateFrameworks/UIAutomation.framework
 *
 * Copyright © 2012, Apple Inc. All rights reserved.
 *
 ******************************************************************************/

#import <UIAutomation/UIAElement.h>

@interface UIAWindow : UIAElement

- (id)_uiaContentArea;
- (BOOL)_windowShouldAcceptAXElement:(id)arg1;
- (id)contentArea;
- (id)elements;

@end

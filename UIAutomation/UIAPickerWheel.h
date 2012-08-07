/* PrivateFrameworks/UIAutomation.framework
 *
 * Copyright © 2012, Apple Inc. All rights reserved.
 *
 ******************************************************************************/

#import <UIAutomation/UIAElement.h>

@interface UIAPickerWheel : UIAElement

- (BOOL)_spinWheel:(int)arg1;
- (id)elements;
- (void)selectValue:(id)arg1;
- (id)values;

@end

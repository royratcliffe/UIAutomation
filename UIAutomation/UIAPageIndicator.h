/* PrivateFrameworks/UIAutomation.framework
 *
 * Copyright © 2012, Apple Inc. All rights reserved.
 *
 ******************************************************************************/

#import <UIAutomation/UIAElement.h>

@interface UIAPageIndicator : UIAElement

- (BOOL)_flipPages:(int)arg1;
- (void)goToNextPage;
- (void)goToPreviousPage;
- (id)pageCount;
- (id)pageIndex;
- (void)selectPage:(id)arg1;

@end

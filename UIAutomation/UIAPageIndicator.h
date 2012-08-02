/* PrivateFrameworks/UIAutomation.framework
 *
 * Copyright © 2012, Apple Inc. All rights reserved.
 *
 ******************************************************************************/

#import <UIAutomation/UIAElement.h>

@interface UIAPageIndicator : UIAElement

- (id)pageIndex;
- (id)pageCount;
- (BOOL)_flipPages:(int)arg1;
- (void)goToNextPage;
- (void)goToPreviousPage;
- (void)selectPage:(id)arg1;

@end

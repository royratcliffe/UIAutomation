/* PrivateFrameworks/UIAutomation.framework
 *
 * Copyright © 2012, Apple Inc. All rights reserved.
 *
 ******************************************************************************/

#import <UIAutomation/UIAScrollView.h>

@class UIAElementArray;

@interface UIACollectionView : UIAScrollView
{
	UIAElementArray *_cells;
}

+ (id)_moreToManyRelationshipKeys;
+ (id)toManyRelationshipKeys;
- (void)_emptyCaches;
- (id)cells;
- (id)scrollItemCount;
- (id)scrollItemIndex;
- (id)value;

@end

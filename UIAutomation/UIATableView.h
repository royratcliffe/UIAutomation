/* PrivateFrameworks/UIAutomation.framework
 *
 * Copyright © 2012, Apple Inc. All rights reserved.
 *
 ******************************************************************************/

#import <UIAutomation/UIAScrollView.h>

@class UIAElementArray;

@interface UIATableView : UIAScrollView
{
	UIAElementArray *_cells;
}

+ (Class)_classForSimpleUIAXElement:(id)arg1;
+ (id)_moreToManyRelationshipKeys;
+ (id)toManyRelationshipKeys;
- (void)_emptyCaches;
- (id)value;
- (id)firstVisibleCellIndex;
- (id)lastVisibleCellIndex;
- (id)cellCount;
- (id)cells;
- (id)groups;
- (id)visibleCells;
- (id)visibleGroups;

@end

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
- (id)cellCount;
- (id)cells;
- (id)firstVisibleCellIndex;
- (id)groups;
- (id)lastVisibleCellIndex;
- (id)value;
- (id)visibleCells;
- (id)visibleGroups;

@end

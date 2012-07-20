/* PrivateFrameworks/UIAutomation.framework
 *
 * Copyright © 2012, Apple Inc. All rights reserved.
 *
 ******************************************************************************/

#import <Foundation/NSArray.h>

@class NSInvocation;

@interface UIAElementArray : NSArray
{
	NSArray *_array;
	NSInvocation *_selfPatienceInvocation;
	double _refreshedTime;
	double _lastAccessedTime;
}

+ (void)initialize;
+ (int)_liveCount;
+ (int)_maxCount;
+ (id)_arrayWithArray:(id)arg1;
+ (id)_cachedArrayAtPtr:(const id *)arg1;
+ (void)_cacheArray:(id)arg1 atPtr:(const id *)arg2;
+ (void)_removeCachedArrayAtPtr:(const id *)arg1;
- (id)_initWithArray:(id)arg1;
- (void)dealloc;
- (unsigned int)count;
- (id)objectAtIndex:(unsigned int)arg1;
- (BOOL)isEqualToArray:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)_selfPatienceInvocation;
- (void)_setSelfPatienceInvocation:(id)arg1;
- (id)_objectWithPatienceInvocationFromUIAObject:(id)arg1 selector:(SEL)arg2;
- (id)nsArray;
- (void)_setArray:(id)arg1;
- (double)_refreshedTime;
- (double)_lastAccessedTime;
- (void)_setLastAccessedTime:(double)arg1;
- (BOOL)_isStillFreshAtTime:(double)arg1;
- (id)_withClass:(Class)arg1;
- (id)_withName:(id)arg1;
- (id)_withValue:(id)arg1 forKey:(id)arg2;
- (id)_withPredicate:(id)arg1;
- (id)withClass:(Class)arg1;
- (id)withName:(id)arg1;
- (id)withValue:(id)arg1 forKey:(id)arg2;
- (id)withPredicate:(id)arg1;
- (id)firstWithName:(id)arg1;
- (id)firstWithValue:(id)arg1 forKey:(id)arg2;
- (id)firstWithPredicate:(id)arg1;
- (void)logElements;
- (void)logElementTrees;
- (id)elementOfClass:(Class)arg1 atIndex:(unsigned int)arg2;
- (id)_scriptingIndexSynonymsForElement:(id)arg1 maxCount:(unsigned int)arg2;
- (id)scriptingFavoredIndexSynonymForElement:(id)arg1;
- (id)scriptingIndexSynonymsForElement:(id)arg1;
- (id)scriptingInvocationString;
- (id)scriptingInvocationFullExpressionString;
- (BOOL)isValid;

@end

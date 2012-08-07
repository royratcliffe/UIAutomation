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

+ (id)_arrayWithArray:(id)arg1;
+ (void)_cacheArray:(id)arg1 atPtr:(id *)arg2;
+ (id)_cachedArrayAtPtr:(id *)arg1;
+ (int)_liveCount;
+ (int)_maxCount;
+ (void)_removeCachedArrayAtPtr:(id *)arg1;
+ (void)initialize;
- (id)_initWithArray:(id)arg1;
- (BOOL)_isStillFreshAtTime:(double)arg1;
- (double)_lastAccessedTime;
- (void)_logLocalizedStringHintForKey:(id)arg1 testValue:(id)arg2;
- (id)_objectWithPatienceInvocationFromUIAObject:(id)arg1 selector:(SEL)arg2;
- (double)_refreshedTime;
- (id)_scriptingIndexSynonymsForElement:(id)arg1 maxCount:(unsigned int)arg2;
- (id)_selfPatienceInvocation;
- (void)_setArray:(id)arg1;
- (void)_setLastAccessedTime:(double)arg1;
- (void)_setSelfPatienceInvocation:(id)arg1;
- (id)_withClass:(Class)arg1;
- (id)_withName:(id)arg1;
- (id)_withPredicate:(id)arg1;
- (id)_withValue:(id)arg1 forKey:(id)arg2;
- (unsigned int)count;
- (void)dealloc;
- (id)description;
- (id)elementOfClass:(Class)arg1 atIndex:(unsigned int)arg2;
- (id)firstWithName:(id)arg1;
- (id)firstWithPredicate:(id)arg1;
- (id)firstWithValue:(id)arg1 forKey:(id)arg2;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToArray:(id)arg1;
- (BOOL)isValid;
- (void)logElementTrees;
- (void)logElements;
- (id)nsArray;
- (id)objectAtIndex:(unsigned int)arg1;
- (id)scriptingFavoredIndexSynonymForElement:(id)arg1;
- (id)scriptingIndexSynonymsForElement:(id)arg1;
- (id)scriptingInvocationFullExpressionString;
- (id)scriptingInvocationString;
- (id)withClass:(Class)arg1;
- (id)withName:(id)arg1;
- (id)withPredicate:(id)arg1;
- (id)withValue:(id)arg1 forKey:(id)arg2;

@end

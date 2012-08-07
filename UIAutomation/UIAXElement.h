/* PrivateFrameworks/UIAutomation.framework
 *
 * Copyright © 2012, Apple Inc. All rights reserved.
 *
 ******************************************************************************/

#import <Foundation/NSObject.h>

#import <UIAutomation/UIAXElement-Protocol.h>

@interface UIAXElement : NSObject<UIAXElement>
{
	struct __AXUIElement *_axuiElementRef;
	double _creationTime;
	double _lastAccessedTime;
	BOOL _isValid;
	long _axError;
}

+ (int)_attributeForString:(id)arg1;
+ (id)_objectForCFTypeRef:(void *)arg1;
+ (int)_parameterizedAttributeForString:(id)arg1;
+ (id)_parameterizedAttributeNumbers;
+ (id)_parameterizedAttributeStrings;
+ (id)_parameterizedAttributesForStringsDictionary;
+ (void)_raiseAXErrorAPIDisabled;
+ (void)_raiseIfAXErrorAPIDisabled:(long)arg1;
+ (id)_regularAttributeNumbers;
+ (id)_regularAttributeStrings;
+ (id)_regularAttributesForStringsDictionary;
+ (id)_stringForAttribute:(int)arg1;
+ (id)_stringForParameterizedAttribute:(int)arg1;
+ (id)_stringsForParameterizedAttributesDictionary;
+ (id)_stringsForRegularAttributesDictionary;
+ (id)_stringsForTraitsDictionary;
+ (id)_traitNumbers;
+ (id)_traitStrings;
+ (void)initialize;
+ (BOOL)registerObserver:(struct __AXObserver *)arg1 forAXNotifications:(BOOL)arg2;
+ (id)stringForAXError:(long)arg1;
+ (id)stringForAXNotification:(int)arg1;
+ (id)stringForTraits:(unsigned long long)arg1;
+ (id)uiaxApplicationAtPosition:(struct CGPoint)arg1;
+ (id)uiaxElementAtPosition:(struct CGPoint)arg1;
+ (id)uiaxElementWithAXUIElementRef:(struct __AXUIElement *)arg1;
+ (id)uiaxFocusedApplicationElement;
+ (id)uiaxSpringBoardElement;
+ (id)uiaxSystemWideElement;
- (id)_copyTraitsNumber;
- (double)_creationTime;
- (BOOL)_hasNonzeroSize;
- (id)_initWithAXUIElementRef:(struct __AXUIElement *)arg1;
- (void)_invalidate;
- (double)_lastAccessedTime;
- (void)_setLastAccessedTime:(double)arg1;
- (void)_setValidForAXError:(long)arg1;
- (id)ancestry;
- (long)axError;
- (struct __AXUIElement *)axuiElementRef;
- (id)centerPoint;
- (BOOL)checkIsValid;
- (id)childWithTestingTrait:(id)arg1;
- (id)children;
- (void)dealloc;
- (id)description;
- (void)finalize;
- (id)firstElementOfAttribute:(int)arg1 withValue:(id)arg2 forAttribute:(int)arg3;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValid;
- (void)logAXAncestry;
- (void)logAXInfo;
- (void)logAXTree;
- (id)parent;
- (BOOL)performAXAction:(int)arg1;
- (BOOL)performAXAction:(int)arg1 withValue:(id)arg2;
- (int)pid;
- (id)rect;
- (id)responder;
- (BOOL)setValue:(id)arg1 forAttribute:(int)arg2;
- (id)stringForAllKnownAttributes;
- (id)stringForAttributes:(id)arg1;
- (unsigned long long)traits;
- (id)traitsNumber;
- (id)uiaxElementAtCenterPoint;
- (id)valueForAttribute:(int)arg1;
- (id)valueForAttribute:(int)arg1 parameter:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (id)valuesForAllKnownAttributes;
- (id)valuesForAttributes:(id)arg1;

@end

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
	int _axError;
}

+ (void)initialize;
+ (void)_raiseAXErrorAPIDisabled;
+ (void)_raiseIfAXErrorAPIDisabled:(long)arg1;
+ (BOOL)registerObserver:(struct __AXObserver *)arg1 forAXNotifications:(BOOL)arg2;
+ (id)uiaxElementWithAXUIElementRef:(struct __AXUIElement *)arg1;
+ (id)_regularAttributeNumbers;
+ (id)_regularAttributeStrings;
+ (id)_parameterizedAttributeNumbers;
+ (id)_parameterizedAttributeStrings;
+ (id)_traitNumbers;
+ (id)_traitStrings;
+ (id)_stringsForRegularAttributesDictionary;
+ (id)_regularAttributesForStringsDictionary;
+ (id)_stringsForParameterizedAttributesDictionary;
+ (id)_parameterizedAttributesForStringsDictionary;
+ (id)_stringsForTraitsDictionary;
+ (id)_stringForAttribute:(int)arg1;
+ (int)_attributeForString:(id)arg1;
+ (id)_stringForParameterizedAttribute:(int)arg1;
+ (int)_parameterizedAttributeForString:(id)arg1;
+ (id)_objectForCFTypeRef:(void *)arg1;
+ (id)uiaxElementAtPosition:(struct CGPoint)arg1;
+ (id)uiaxSystemWideElement;
+ (id)uiaxFocusedApplicationElement;
+ (id)stringForAXError:(long)arg1;
+ (id)stringForAXNotification:(int)arg1;
+ (id)stringForTraits:(unsigned long long)arg1;
- (void)_invalidate;
- (void)_setValidForAXError:(long)arg1;
- (id)_initWithAXUIElementRef:(struct __AXUIElement *)arg1;
- (double)_creationTime;
- (double)_lastAccessedTime;
- (void)_setLastAccessedTime:(double)arg1;
- (void)dealloc;
- (void)finalize;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (struct __AXUIElement *)axuiElementRef;
- (id)valueForAttribute:(int)arg1;
- (BOOL)setValue:(id)arg1 forAttribute:(int)arg2;
- (id)valuesForAttributes:(id)arg1;
- (id)valueForAttribute:(int)arg1 parameter:(id)arg2;
- (id)valueForKey:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (BOOL)performAXAction:(int)arg1;
- (BOOL)performAXAction:(int)arg1 withValue:(id)arg2;
- (int)pid;
- (long)axError;
- (BOOL)isValid;
- (BOOL)checkIsValid;
- (id)valuesForAllKnownAttributes;
- (id)stringForAttributes:(id)arg1;
- (id)stringForAllKnownAttributes;
- (id)_copyTraitsNumber;
- (id)traitsNumber;
- (unsigned long long)traits;
- (id)description;
- (id)rect;
- (id)centerPoint;
- (id)uiaxElementAtCenterPoint;
- (id)firstElementOfAttribute:(int)arg1 withValue:(id)arg2 forAttribute:(int)arg3;
- (id)parent;
- (id)children;
- (id)childWithTestingTrait:(id)arg1;
- (id)ancestry;
- (BOOL)_hasNonzeroSize;
- (void)logAXInfo;
- (void)logAXAncestry;
- (void)logAXTree;

@end

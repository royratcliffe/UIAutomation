/* PrivateFrameworks/UIAutomation.framework
 *
 * Copyright © 2012, Apple Inc. All rights reserved.
 *
 ******************************************************************************/

struct __AXObserver;
struct __AXUIElement;

@protocol UIAXElement
+ (BOOL)registerObserver:(struct __AXObserver *)arg1 forAXNotifications:(BOOL)arg2;
+ (id)uiaxElementWithAXUIElementRef:(struct __AXUIElement *)arg1;
+ (id)uiaxElementAtPosition:(struct CGPoint)arg1;
+ (id)uiaxSystemWideElement;
+ (id)uiaxFocusedApplicationElement;
+ (id)stringForAXError:(long)arg1;
+ (id)stringForAXNotification:(int)arg1;
+ (id)stringForTraits:(unsigned long long)arg1;
- (struct __AXUIElement *)axuiElementRef;
- (id)valueForAttribute:(int)arg1;
- (BOOL)setValue:(id)arg1 forAttribute:(int)arg2;
- (id)valuesForAttributes:(id)arg1;
- (id)valueForAttribute:(int)arg1 parameter:(id)arg2;
- (BOOL)performAXAction:(int)arg1;
- (BOOL)performAXAction:(int)arg1 withValue:(id)arg2;
- (int)pid;
- (long)axError;
- (BOOL)isValid;
- (BOOL)checkIsValid;
- (id)valuesForAllKnownAttributes;
- (id)stringForAttributes:(id)arg1;
- (id)stringForAllKnownAttributes;
- (id)traitsNumber;
- (unsigned long long)traits;
- (id)rect;
- (id)centerPoint;
- (id)description;
- (id)firstElementOfAttribute:(int)arg1 withValue:(id)arg2 forAttribute:(int)arg3;
- (id)parent;
- (id)children;
- (id)childWithTestingTrait:(id)arg1;
- (id)ancestry;
@end

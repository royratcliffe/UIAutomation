/* PrivateFrameworks/UIAutomation.framework
 *
 * Copyright © 2012, Apple Inc. All rights reserved.
 *
 ******************************************************************************/

struct __AXObserver;
struct __AXUIElement;

@protocol UIAXElement
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
- (id)ancestry;
- (long)axError;
- (struct __AXUIElement *)axuiElementRef;
- (id)centerPoint;
- (BOOL)checkIsValid;
- (id)childWithTestingTrait:(id)arg1;
- (id)children;
- (id)description;
- (id)firstElementOfAttribute:(int)arg1 withValue:(id)arg2 forAttribute:(int)arg3;
- (BOOL)isValid;
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
- (id)valueForAttribute:(int)arg1;
- (id)valueForAttribute:(int)arg1 parameter:(id)arg2;
- (id)valuesForAllKnownAttributes;
- (id)valuesForAttributes:(id)arg1;
@end

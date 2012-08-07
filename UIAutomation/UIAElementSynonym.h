/* PrivateFrameworks/UIAutomation.framework
 *
 * Copyright © 2012, Apple Inc. All rights reserved.
 *
 ******************************************************************************/

#import <Foundation/NSObject.h>

@class NSString;

@interface UIAElementSynonym : NSObject
{
	NSString *_relationship;
	NSString *_attribute;
	id _value;
}

+ (void)_setAssociatedStringExpressions:(id)arg1 forSynonymString:(id)arg2;
+ (id)associatedStringExpressionsForSynonymString:(id)arg1;
+ (id)synonymForRelationship:(id)arg1;
+ (id)synonymForRelationship:(id)arg1 attribute:(id)arg2 value:(id)arg3;
@property(readonly) NSString *attribute; // @synthesize attribute=_attribute;
- (void)dealloc;
- (id)initWithRelationship:(id)arg1 attribute:(id)arg2 value:(id)arg3;
@property(readonly) NSString *relationship; // @synthesize relationship=_relationship;
- (id)stringForScriptingLanguage:(int)arg1 withOptions:(unsigned int)arg2;
@property(readonly) id value; // @synthesize value=_value;

@end

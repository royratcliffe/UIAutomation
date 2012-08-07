/* PrivateFrameworks/UIAutomation.framework
 *
 * Copyright © 2012, Apple Inc. All rights reserved.
 *
 ******************************************************************************/

#import <Foundation/NSObject.h>

@class NSString;

@interface UIALocalizedValue : NSObject
{
	NSString *_key;
	NSString *_value;
	NSString *_tableName;
	NSString *_bundleID;
	NSString *_bundlePath;
}

- (id)_jsVariableExpressionString;
- (id)_jsVariableName;
@property(readonly) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly) NSString *bundlePath; // @synthesize bundlePath=_bundlePath;
- (void)dealloc;
- (id)initWithAXAttributedString:(id)arg1;
@property(readonly) NSString *key; // @synthesize key=_key;
@property(readonly) NSString *tableName; // @synthesize tableName=_tableName;
@property(readonly) NSString *value; // @synthesize value=_value;

@end

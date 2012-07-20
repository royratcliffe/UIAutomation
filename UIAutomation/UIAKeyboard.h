/* PrivateFrameworks/UIAutomation.framework
 *
 * Copyright © 2012, Apple Inc. All rights reserved.
 *
 ******************************************************************************/

#import <UIAutomation/UIAElement.h>

@interface UIAKeyboard : UIAElement
{
	double _interKeyDelay;
	double _interKeyDelayVariance;
}

- (id)init;
- (void)_typeKeyForString:(id)arg1;
- (void)typeString:(id)arg1;

@property double interKeyDelayVariance; // @synthesize interKeyDelayVariance=_interKeyDelayVariance;
@property double interKeyDelay; // @synthesize interKeyDelay=_interKeyDelay;

@end

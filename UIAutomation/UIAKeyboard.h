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

- (void)_typeKeyForString:(id)arg1 keyLayout:(id)arg2;
- (id)init;
- (id)inputMode;
@property double interKeyDelay; // @synthesize interKeyDelay=_interKeyDelay;
@property double interKeyDelayVariance; // @synthesize interKeyDelayVariance=_interKeyDelayVariance;
- (void)triggerDictationFromAudioInputPath:(id)arg1;
- (void)typeString:(id)arg1;

@end

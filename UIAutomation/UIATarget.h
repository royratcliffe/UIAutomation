/* PrivateFrameworks/UIAutomation.framework
 *
 * Copyright © 2012, Apple Inc. All rights reserved.
 *
 ******************************************************************************/

#import <UIAutomation/UIAElement.h>

@class CLSimulationManager, NSDate, NSString, UIAHost;

@interface UIATarget : UIAElement
{
	NSDate *_startupDate;
	int _textViewValueMaxLength;
	int _interfaceOrientation;
	double _lastAnimationEndedTime;
	NSString *_nameOfLastApp;
	UIAHost *_host;
	CLSimulationManager *_locationSimulationManager;
	BOOL _logElementTakesScreenshot;
}

+ (UIATarget *)localTarget;
+ (id)_locationForObject:(id)arg1 withOptions:(id)arg2;
+ (id)attributeKeys;
+ (id)toOneRelationshipKeys;
+ (id)toManyRelationshipKeys;
- (id)_systemVersionDictionary;
- (id)init;
- (void)dealloc;
- (void)_invalidate;
- (void)_updateInterfaceOrientation;
- (int)_interfaceOrientation;
- (double)_lastAnimationEndedTime;
- (void)_setLastAnimationEndedTime:(double)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (BOOL)isValid;
- (BOOL)checkIsValid;
- (id)rect;
- (id)name;
- (id)model;
- (id)systemName;
- (id)systemVersion;
- (id)systemBuild;
- (id)uniqueIdentifier;
- (id)deviceOrientation;
- (BOOL)setDeviceOrientation:(id)arg1;
- (BOOL)setLocation:(id)arg1;
- (BOOL)setLocation:(id)arg1 withOptions:(id)arg2;
- (id)startupDate;
- (double)upTime;
- (id)lastCommandTime;
- (void)captureScreenWithName:(id)arg1;
- (id)imageFromRect:(struct CGRect)arg1;
- (void)captureRect:(id)arg1 withName:(id)arg2;
- (id)targetClipboard;
- (void)setTargetClipboard:(id)arg1;
- (int)textViewValueMaxLength;
- (void)setTextViewValueMaxLength:(int)arg1;
- (id)host;
- (id)applications;
- (id)frontMostApp;
- (id)mainScreen;
- (id)elements;
- (id)uiaxSystemWideElement;
- (double)patience;
- (void)setPatience:(double)arg1;
- (void)pushPatience:(double)arg1;
- (double)popPatience;
- (BOOL)delayForTimeInterval:(double)arg1;
- (void)setVerboseOptions:(unsigned int)arg1;
- (unsigned int)verboseOptions;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setPassiveEventListeningMode:(id)arg1 withDelay:(id)arg2;
- (BOOL)_handleAlert;
- (id)scriptingFavoredSynonymString;
- (id)scriptingSynonymStrings;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 bundlePath:(id)arg4;
- (BOOL)_tapOptionalObject:(id)arg1 tapCount:(double)arg2 touchCount:(double)arg3 tapOffset:(id)arg4;
- (BOOL)_tapRequiredObject:(id)arg1 tapCount:(double)arg2 touchCount:(double)arg3;
- (BOOL)_dragFrom:(id)arg1 to:(id)arg2 forDuration:(double)arg3 withTouchCount:(int)arg4 withFlick:(BOOL)arg5;
- (void)tap:(id)arg1;
- (void)doubleTap:(id)arg1;
- (void)twoFingerTap:(id)arg1;
- (void)tap:(id)arg1 withOptions:(id)arg2;
- (void)touch:(id)arg1 andHold:(id)arg2;
- (void)dragFrom:(id)arg1 to:(id)arg2 forDuration:(id)arg3;
- (void)flickFrom:(id)arg1 to:(id)arg2;
- (void)pinchCloseFrom:(id)arg1 to:(id)arg2 forDuration:(id)arg3;
- (void)pinchOpenFrom:(id)arg1 to:(id)arg2 forDuration:(id)arg3;
- (void)rotate:(id)arg1 withOptions:(id)arg2;
- (void)shake;
- (void)clickMenu;
- (void)holdMenu:(id)arg1;
- (void)clickLock;
- (void)holdLock:(id)arg1;
- (void)clickVolumeUp;
- (void)holdVolumeUp:(id)arg1;
- (void)clickVolumeDown;
- (void)holdVolumeDown:(id)arg1;
- (void)setRinger:(id)arg1;
- (BOOL)_screenIsLocked;
- (id)_lockBar;
- (BOOL)_screenIsOff;
- (BOOL)lockForDuration:(id)arg1;
- (BOOL)lock;
- (BOOL)unlock;
- (BOOL)deactivateAppForDuration:(id)arg1;
- (BOOL)deactivateApp;
- (BOOL)reactivateApp;

@property BOOL logElementTakesScreenshot; // @synthesize logElementTakesScreenshot=_logElementTakesScreenshot;

@end

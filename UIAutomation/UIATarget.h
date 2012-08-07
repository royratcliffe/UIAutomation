/* PrivateFrameworks/UIAutomation.framework
 *
 * Copyright © 2012, Apple Inc. All rights reserved.
 *
 ******************************************************************************/

#import <UIAutomation/UIAElement.h>

@class CLSimulationManager, NSDate, NSString, UIAHost;
@class UIAApplication;

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

+ (id)_locationForObject:(id)arg1 withOptions:(id)arg2;
+ (id)attributeKeys;
+ (id)localTarget;
+ (id)toManyRelationshipKeys;
+ (id)toOneRelationshipKeys;
- (id)_applicationAtPosition:(struct CGPoint)arg1;
- (BOOL)_dragFrom:(id)arg1 to:(id)arg2 forDuration:(double)arg3 withTouchCount:(int)arg4 withFlick:(BOOL)arg5;
- (BOOL)_handleAlert;
- (BOOL)_handleAnnouncement:(id)arg1;
- (int)_interfaceOrientation;
- (void)_invalidate;
- (double)_lastAnimationEndedTime;
- (BOOL)_screenIsLocked;
- (BOOL)_screenIsOff;
- (void)_setLastAnimationEndedTime:(double)arg1;
- (id)_systemVersionDictionary;
- (BOOL)_tapOptionalObject:(id)arg1 tapCount:(double)arg2 touchCount:(double)arg3 tapOffset:(id)arg4;
- (BOOL)_tapRequiredObject:(id)arg1 tapCount:(double)arg2 touchCount:(double)arg3;
- (BOOL)_touch:(id)arg1 withOptions:(id)arg2;
- (void)_updateInterfaceOrientation;
- (id)applicationAtPoint:(id)arg1;
- (id)applications;
- (void)captureRect:(id)arg1 withName:(id)arg2;
- (void)captureScreenWithName:(id)arg1;
- (BOOL)checkIsValid;
- (void)clickLock;
- (void)clickMenu;
- (void)clickVolumeDown;
- (void)clickVolumeUp;
- (BOOL)deactivateApp;
- (BOOL)deactivateAppForDuration:(id)arg1;
- (void)dealloc;
- (BOOL)delayForTimeInterval:(double)arg1;
- (id)delegate;
- (id)deviceOrientation;
- (void)doubleTap:(id)arg1;
- (void)dragFrom:(id)arg1 to:(id)arg2 forDuration:(id)arg3;
- (id)elements;
- (void)flickFrom:(id)arg1 to:(id)arg2;
- (id)frontMostApp;
- (unsigned int)hash;
- (void)holdLock:(id)arg1;
- (void)holdMenu:(id)arg1;
- (void)holdVolumeDown:(id)arg1;
- (void)holdVolumeUp:(id)arg1;
- (id)host;
- (id)imageFromRect:(struct CGRect)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValid;
- (id)languageID;
- (id)languageName;
- (id)lastCommandTime;
- (id)localeID;
- (id)localeName;
- (id)localizedStringForKey:(id)arg1;
- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 bundlePath:(id)arg4;
- (id)localizedStringForKey:(id)arg1 withOptions:(id)arg2;
- (BOOL)lock;
- (BOOL)lockForDuration:(id)arg1;
@property BOOL logElementTakesScreenshot; // @synthesize logElementTakesScreenshot=_logElementTakesScreenshot;
- (id)mainScreen;
- (id)model;
- (id)name;
- (double)patience;
- (void)pinchCloseFrom:(id)arg1 to:(id)arg2 forDuration:(id)arg3;
- (void)pinchOpenFrom:(id)arg1 to:(id)arg2 forDuration:(id)arg3;
- (double)popPatience;
- (void)pushPatience:(double)arg1;
- (BOOL)reactivateApp;
- (id)rect;
- (id)remote;
- (void)rotate:(id)arg1 withOptions:(id)arg2;
- (id)scriptingFavoredSynonymString;
- (id)scriptingSynonymStrings;
- (id)scriptingSynonyms;
- (void)setDelegate:(id)arg1;
- (BOOL)setDeviceOrientation:(id)arg1;
- (BOOL)setLocation:(id)arg1;
- (BOOL)setLocation:(id)arg1 withOptions:(id)arg2;
- (void)setPassiveEventListeningMode:(id)arg1 withDelay:(id)arg2;
- (void)setPatience:(double)arg1;
- (void)setRinger:(id)arg1;
- (void)setTargetClipboard:(id)arg1;
- (void)setTextViewValueMaxLength:(int)arg1;
- (void)setVerboseOptions:(unsigned int)arg1;
- (void)shake;
- (id)startupDate;
- (id)systemBuild;
- (id)systemName;
- (id)systemVersion;
- (void)tap:(id)arg1;
- (void)tap:(id)arg1 withOptions:(id)arg2;
- (id)targetClipboard;
- (int)textViewValueMaxLength;
- (void)touch:(id)arg1;
- (void)touch:(id)arg1 andHold:(id)arg2;
- (void)touch:(id)arg1 withOptions:(id)arg2;
- (void)twoFingerTap:(id)arg1;
- (id)uiaxSpringBoardElement;
- (id)uiaxSystemWideElement;
- (id)uniqueIdentifier;
- (BOOL)unlock;
- (BOOL)unlockWithOptions:(id)arg1;
- (double)upTime;
- (unsigned int)verboseOptions;

@end

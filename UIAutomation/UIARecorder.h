/* PrivateFrameworks/UIAutomation.framework
 *
 * Copyright © 2012, Apple Inc. All rights reserved.
 *
 ******************************************************************************/

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableString, NSTimer, UIARecorderAction, UIATarget, UIAXElement;

@interface UIARecorder : NSObject
{
	UIATarget *_uiaTarget;
	UIARecorderAction *_currentAction;
	double _lastActionTime;
	double _lastEventReleaseTime;
	UIAXElement *_previousAXElement;
	NSArray *_pendingTapExpression;
	NSMutableArray *_pendingDragExpressions;
	unsigned int _tapCount;
	NSTimer *_keystrokeFlushTimer;
	NSTimer *_expressionFlushTimer;
	NSMutableString *_keystrokes;
	BOOL _isRecording;
	id _delegate;
}

+ (id)defaultRecorder;
- (void)_handEnded:(CDStruct_cee7353d *)arg1;
- (void)_handStarted:(CDStruct_cee7353d *)arg1;
- (void)_releaseEvents;
- (id)_scriptingStringForOffsetWithScreenPoint:(struct CGPoint)arg1 inRect:(struct CGRect)arg2;
- (id)_scriptingStringForPoint:(struct CGPoint)arg1;
@property(retain) UIARecorderAction *currentAction; // @synthesize currentAction=_currentAction;
- (void)dealloc;
@property id delegate; // @synthesize delegate=_delegate;
- (void)flushDragExpressions:(id)arg1;
- (void)flushKeystrokes:(id)arg1;
- (void)flushTapExpression:(id)arg1;
- (void)handleAlert;
- (void)handleEvent:(CDStruct_cee7353d *)arg1;
- (void)handleOrientationChange;
- (id)init;
@property BOOL isRecording; // @synthesize isRecording=_isRecording;
@property double lastActionTime; // @synthesize lastActionTime=_lastActionTime;
- (void)markNewActionAndLog:(BOOL)arg1;
@property(retain) NSArray *pendingTapExpression; // @synthesize pendingTapExpression=_pendingTapExpression;
- (void)postElementNotFoundAtPoint:(struct CGPoint)arg1 description:(id)arg2;
- (void)postMutlitouchGestureDetected;
- (void)postRecordedExpression:(id)arg1;
- (void)postStaleEventMessage;
@property(retain) UIAXElement *previousAXElement; // @synthesize previousAXElement=_previousAXElement;
- (void)start;
- (void)stop;
@property(readonly) UIATarget *uiaTarget; // @synthesize uiaTarget=_uiaTarget;

@end

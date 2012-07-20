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
- (id)init;
- (void)dealloc;
- (void)start;
- (void)stop;
- (void)postRecordedExpression:(id)arg1;
- (void)postElementNotFoundAtPoint:(struct CGPoint)arg1 description:(id)arg2;
- (void)postStaleEventMessage;
- (void)postMutlitouchGestureDetected;
- (void)handleAlert;
- (void)handleOrientationChange;
- (void)_releaseEvents;
- (void)_handStarted:(void *)arg1;
- (id)_scriptingStringForPoint:(struct CGPoint)arg1;
- (id)_scriptingStringForOffsetWithScreenPoint:(struct CGPoint)arg1 inRect:(struct CGRect)arg2;
- (void)_handEnded:(void *)arg1;
- (void)handleEvent:(void *)arg1;
- (void)markNewActionAndLog:(BOOL)arg1;
- (void)flushTapExpression:(id)arg1;
- (void)flushDragExpressions:(id)arg1;
- (void)flushKeystrokes:(id)arg1;

@property double lastActionTime; // @synthesize lastActionTime=_lastActionTime;
@property id delegate; // @synthesize delegate=_delegate;
@property BOOL isRecording; // @synthesize isRecording=_isRecording;
@property(retain) NSArray *pendingTapExpression; // @synthesize pendingTapExpression=_pendingTapExpression;
@property(retain) UIAXElement *previousAXElement; // @synthesize previousAXElement=_previousAXElement;
@property(retain) UIARecorderAction *currentAction; // @synthesize currentAction=_currentAction;
@property(readonly) UIATarget *uiaTarget; // @synthesize uiaTarget=_uiaTarget;

@end

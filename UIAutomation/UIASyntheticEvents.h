/* PrivateFrameworks/UIAutomation.framework
 *
 * Copyright © 2012, Apple Inc. All rights reserved.
 *
 ******************************************************************************/

#import <Foundation/NSObject.h>

struct _EventMessage;

@interface UIASyntheticEvents : NSObject
{
	struct __IOHIDEventSystemClient *_ioSystemClient;
}

+ (void)initialize;
+ (id)sharedEventGenerator;
- (void)_moveLastTouchPoint:(struct CGPoint)arg1;
- (void)_sendDownEvent:(int)arg1 upEvent:(int)arg2;
- (void)_sendDownEvent:(int)arg1 upEvent:(int)arg2 duration:(double)arg3;
- (void)_sendGSEvent:(CDStruct_cee7353d *)arg1 systemEvent:(BOOL)arg2;
- (void)_sendHIDEvent:(struct __IOHIDEvent *)arg1;
- (void)_sendHIDKeyboardEventPage:(unsigned int)arg1 usage:(unsigned int)arg2 duration:(double)arg3;
- (void)_sendSimpleEvent:(int)arg1;
- (void)_updateTouches:(int *)arg1 points:(struct CGPoint *)arg2 count:(int)arg3;
- (void)clickLock;
- (void)clickMenu;
- (void)clickVolumeDown;
- (void)clickVolumeUp;
- (void)dealloc;
- (void)holdLock:(double)arg1;
- (void)holdMenu:(double)arg1;
- (void)holdVolumeDown:(double)arg1;
- (void)holdVolumeUp:(double)arg1;
- (void)liftUp:(struct CGPoint)arg1;
- (void)liftUp:(struct CGPoint)arg1 touchCount:(unsigned int)arg2;
- (void)liftUpAtPoints:(struct CGPoint *)arg1 touchCount:(unsigned int)arg2;
- (void)lockDevice;
- (void)moveToPoints:(struct CGPoint *)arg1 touchCount:(unsigned int)arg2 duration:(double)arg3;
- (void)sendAccelerometerX:(float)arg1 Y:(float)arg2 Z:(float)arg3;
- (void)sendAccelerometerX:(float)arg1 Y:(float)arg2 Z:(float)arg3 duration:(double)arg4;
- (void)sendDoubleFingerTap:(struct CGPoint)arg1;
- (void)sendDoubleTap:(struct CGPoint)arg1;
- (void)sendDragWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3;
- (void)sendDragWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3 withFlick:(BOOL)arg4 inRect:(struct CGRect)arg5;
- (void)sendFlickWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3;
- (void)sendMultifingerDragWithPointArray:(struct CGPoint *)arg1 numPoints:(int)arg2 duration:(double)arg3 numFingers:(int)arg4;
- (void)sendPinchCloseWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3;
- (void)sendPinchCloseWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3 inRect:(struct CGRect)arg4;
- (void)sendPinchOpenWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3;
- (void)sendPinchOpenWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 duration:(double)arg3 inRect:(struct CGRect)arg4;
- (void)sendRotate:(struct CGPoint)arg1 withRadius:(float)arg2 rotation:(float)arg3 duration:(float)arg4 touchCount:(unsigned int)arg5;
- (void)sendTap:(struct CGPoint)arg1;
- (void)sendTaps:(int)arg1 location:(struct CGPoint)arg2 withNumberOfTouches:(int)arg3 inRect:(struct CGRect)arg4;
- (void)setOrientation:(int)arg1;
- (void)setRinger:(BOOL)arg1;
- (void)shake;
- (void)touchDown:(struct CGPoint)arg1;
- (void)touchDown:(struct CGPoint)arg1 touchCount:(unsigned int)arg2;
- (void)touchDownAtPoints:(struct CGPoint *)arg1 touchCount:(unsigned int)arg2;

@end

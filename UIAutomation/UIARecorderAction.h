/* PrivateFrameworks/UIAutomation.framework
 *
 * Copyright © 2012, Apple Inc. All rights reserved.
 *
 ******************************************************************************/

#import <Foundation/NSObject.h>
#import <UIKit/UIKit.h>

@class NSArray, NSString, UIAElement, UIAXElement;

@interface UIARecorderAction : NSObject
{
	void *_eventRecord;
	struct {
		int _field1;
		unsigned short _field2;
		unsigned short _field3;
		float _field4;
		float _field5;
		float _field6;
		float _field7;
		float _field8;
		float _field9;
		unsigned char _field10;
		unsigned char _field11;
		unsigned char _field12;
		struct {
			unsigned char pathIndex;
			unsigned char pathIdentity;
			unsigned char pathProximity;
			float pathPressure;
			float pathMajorRadius;
			struct CGPoint pathLocation;
			void *pathWindow;
		} _field13[0];
	} *_eventRecordData;
	unsigned int _eventRecordDataLength;
	NSArray *_points;
	UIAElement *_element;
	UIAXElement *_axElement;
	BOOL _elementCanScroll;
	NSString *_keyName;
	NSArray *_expression;
	int _actionType;
	unsigned int _touchCount;
	struct CGPoint _startLocation;
	double _startTime;
	struct CGPoint _endLocation;
	double _lastUpdateTime;
}

+ (id)actionWithGSEventRecord:(void *)arg1;
+ (id)expressionForElement:(id)arg1;
+ (BOOL)_elementCanScroll:(id)arg1;
- (id)_initWithGSEventRecord:(void *)arg1;
- (void)dealloc;
- (void)setEventRecord:(void *)arg1;
- (void *)eventRecord;
- (void)updateWithGSEventRecord:(void *)arg1;
- (double)duration;
- (BOOL)isCancelEvent;

@property struct CGPoint endLocation; // @synthesize endLocation=_endLocation;
@property struct CGPoint startLocation; // @synthesize startLocation=_startLocation;
@property unsigned int touchCount; // @synthesize touchCount=_touchCount;
@property int actionType; // @synthesize actionType=_actionType;
@property(retain) NSArray *expression; // @synthesize expression=_expression;
@property(retain) NSString *keyName; // @synthesize keyName=_keyName;
@property BOOL elementCanScroll; // @synthesize elementCanScroll=_elementCanScroll;
@property(retain) UIAXElement *axElement; // @synthesize axElement=_axElement;
@property(retain) UIAElement *element; // @synthesize element=_element;
@property(retain) NSArray *points; // @synthesize points=_points;

@end

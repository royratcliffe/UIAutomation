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
	        unsigned char _field1;
	        unsigned char _field2;
	        unsigned char _field3;
	        float _field4;
	        float _field5;
	        struct CGPoint _field6;
	        unsigned int _field7;
	        void *_field8;
	    } _field13[0];
	} *_eventRecordData;
	unsigned long _eventRecordDataLength;
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

+ (BOOL)_elementCanScroll:(id)arg1;
+ (id)actionWithGSEventRecord:(CDStruct_cee7353d *)arg1;
+ (id)expressionForElement:(id)arg1;
- (id)_initWithGSEventRecord:(CDStruct_cee7353d *)arg1;
@property int actionType; // @synthesize actionType=_actionType;
@property(retain) UIAXElement *axElement; // @synthesize axElement=_axElement;
- (void)dealloc;
- (double)duration;
@property(retain) UIAElement *element; // @synthesize element=_element;
@property BOOL elementCanScroll; // @synthesize elementCanScroll=_elementCanScroll;
@property struct CGPoint endLocation; // @synthesize endLocation=_endLocation;
- (CDStruct_cee7353d *)eventRecord;
@property(retain) NSArray *expression; // @synthesize expression=_expression;
- (BOOL)isCancelEvent;
@property(retain) NSString *keyName; // @synthesize keyName=_keyName;
@property(retain) NSArray *points; // @synthesize points=_points;
- (void)setEventRecord:(CDStruct_cee7353d *)arg1;
@property struct CGPoint startLocation; // @synthesize startLocation=_startLocation;
@property unsigned int touchCount; // @synthesize touchCount=_touchCount;
- (void)updateWithGSEventRecord:(CDStruct_cee7353d *)arg1;

@end

/* PrivateFrameworks/UIAutomation.framework
 *
 * Copyright © 2012, Apple Inc. All rights reserved.
 *
 ******************************************************************************/

#import <UIAutomation/UIAElement.h>

@class UIASyntheticEvents;

@interface UIARemote : UIAElement
{
	UIASyntheticEvents *_eventGenerator;
}

+ (id)sharedRemote;
- (void)clickDown;
- (void)clickLeft;
- (void)clickMenu;
- (void)clickPlayPause;
- (void)clickRight;
- (void)clickSelect;
- (void)clickUp;
- (void)dealloc;
- (void)holdDown:(double)arg1;
- (void)holdLeft:(double)arg1;
- (void)holdMenu:(double)arg1;
- (void)holdPlayPause:(double)arg1;
- (void)holdRight:(double)arg1;
- (void)holdSelect:(double)arg1;
- (void)holdUp:(double)arg1;
- (id)init;

@end

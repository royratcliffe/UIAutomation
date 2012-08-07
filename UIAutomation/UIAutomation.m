/* UIAutomation UIAutomation.m
 *
 * Copyright © 2012, The OCCukes Organisation. All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the “Software”), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 *	The above copyright notice and this permission notice shall be included in
 *	all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED “AS IS,” WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT. IN NO
 * EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES
 * OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 ******************************************************************************/

#define __UIAUTOMATION_NO_PRIVATE_FRAMEWORK_IMPORTS__
#import "UIAutomation.h"

@implementation UIAutomation

+ (void)load
{
	NSDictionary *environment = [[NSProcessInfo processInfo] environment];
	NSString *iPhoneSimulatorRoot = [environment objectForKey:@"IPHONE_SIMULATOR_ROOT"];
	NSString *path = [iPhoneSimulatorRoot stringByAppendingPathComponent:@"Developer/Library/PrivateFrameworks/UIAutomation.framework"];
	NSBundle *bundle = [NSBundle bundleWithPath:path];
	if ([bundle load])
	{
		[bundle principalClass];
	}
}

+ (Class)actionSheetClass
{
	return NSClassFromString(@"UIAActionSheet");
}

+ (Class)activityIndicatorClass
{
	return NSClassFromString(@"UIAActivityIndicator");
}

+ (Class)alertClass
{
	return NSClassFromString(@"UIAAlert");
}

+ (Class)applicationClass
{
	return NSClassFromString(@"UIAApplication");
}

+ (Class)buttonClass
{
	return NSClassFromString(@"UIAButton");
}

+ (Class)editingMenuClass
{
	return NSClassFromString(@"UIAEditingMenu");
}

+ (Class)elementClass
{
	return NSClassFromString(@"UIAElement");
}

+ (Class)elementArrayClass
{
	return NSClassFromString(@"UIAElementArray");
}

+ (Class)elementNilClass
{
	return NSClassFromString(@"UIAElementNil");
}

+ (Class)hostClass
{
	return NSClassFromString(@"UIAHost");
}

+ (Class)imageClass
{
	return NSClassFromString(@"UIAImage");
}

+ (Class)keyClass
{
	return NSClassFromString(@"UIAKey");
}

+ (Class)keyboardClass
{
	return NSClassFromString(@"UIAKeyboard");
}

+ (Class)linkClass
{
	return NSClassFromString(@"UIALink");
}

+ (Class)navigationBarClass
{
	return NSClassFromString(@"UIANavigationBar");
}

+ (Class)pageIndicatorClass
{
	return NSClassFromString(@"UIAPageIndicator");
}

+ (Class)pickerClass
{
	return NSClassFromString(@"UIAPicker");
}

+ (Class)pickerWheelClass
{
	return NSClassFromString(@"UIAPickerWheel");
}

+ (Class)popoverClass
{
	return NSClassFromString(@"UIAPopover");
}

+ (Class)progressIndicatorClass
{
	return NSClassFromString(@"UIAProgressIndicator");
}

+ (Class)recorderClass
{
	return NSClassFromString(@"UIARecorder");
}

+ (Class)recorderActionClass
{
	return NSClassFromString(@"UIARecorderAction");
}

+ (Class)screenClass
{
	return NSClassFromString(@"UIAScreen");
}

+ (Class)scrollViewClass
{
	return NSClassFromString(@"UIAScrollView");
}

+ (Class)searchBarClass
{
	return NSClassFromString(@"UIASearchBar");
}

+ (Class)secureTextFieldClass
{
	return NSClassFromString(@"UIASecureTextField");
}

+ (Class)segmentedControlClass
{
	return NSClassFromString(@"UIASegmentedControl");
}

+ (Class)sliderClass
{
	return NSClassFromString(@"UIASlider");
}

+ (Class)staticTextClass
{
	return NSClassFromString(@"UIAStaticText");
}

+ (Class)statusBarClass
{
	return NSClassFromString(@"UIAStatusBar");
}

+ (Class)switchClass
{
	return NSClassFromString(@"UIASwitch");
}

+ (Class)syntheticEventsClass
{
	return NSClassFromString(@"UIASyntheticEvents");
}

+ (Class)tabBarClass
{
	return NSClassFromString(@"UIATabBar");
}

+ (Class)tableCellClass
{
	return NSClassFromString(@"UIATableCell");
}

+ (Class)tableGroupClass
{
	return NSClassFromString(@"UIATableGroup");
}

+ (Class)tableViewClass
{
	return NSClassFromString(@"UIATableView");
}

+ (Class)targetClass
{
	return NSClassFromString(@"UIATarget");
}

+ (Class)textFieldClass
{
	return NSClassFromString(@"UIATextField");
}

+ (Class)textViewClass
{
	return NSClassFromString(@"UIATextView");
}

+ (Class)toolbarClass
{
	return NSClassFromString(@"UIAToolbar");
}

+ (Class)webViewClass
{
	return NSClassFromString(@"UIAWebView");
}

+ (Class)windowClass
{
	return NSClassFromString(@"UIAWindow");
}

+ (Class)xElementClass
{
	return NSClassFromString(@"UIAXElement");
}

+ (Class)activityClass
{
	return NSClassFromString(@"UIAActivityView");
}

+ (Class)collectionCellClass
{
	return NSClassFromString(@"UIACollectionCell");
}

+ (Class)collectionViewClass
{
	return NSClassFromString(@"UIACollectionView");
}

+ (Class)elementSynonymClass
{
	return NSClassFromString(@"UIAElementSynonym");
}

+ (Class)localizedValueClass
{
	return NSClassFromString(@"UIALocalizedValue");
}

+ (Class)mapViewClass
{
	return NSClassFromString(@"UIAMapView");
}

+ (Class)remoteClass
{
	return NSClassFromString(@"UIARemote");
}

@end

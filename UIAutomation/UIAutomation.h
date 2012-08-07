/* UIAutomation UIAutomation.h
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

#import <Foundation/Foundation.h>

/*!
 * @brief Dynamically loads the private UIAutomation framework.
 * @details The UIAutomation class plays two roles. Firstly, it loads the
 * private UIAutomatic framework _dynamically_ rather than the usual static
 * loading. Secondly, it gives access to the automation classes by acting as a
 * monolithic library header; importing `UIAutomation/UIAutomation.h` includes
 * all the automation framework interfaces.
 *
 * You cannot directly access the UIAutomation classes. Doing so requires that
 * you directly link against the private framework. The linker will complain if
 * you do not when accessing classes directly, because the linker tries to
 * resolve them at link-time rather than run-time; the loader will resolve the
 * external references finally at load-time. However, since test bundles do not
 * want to link against the private UIAutomation framework statically, only
 * dynamically, you need to therefore access the classes dynamically. So rather
 * than getting the local target using
 * @code
 *	UIATarget *localTarget = [UIATarget localTarget];
 * @endcode
 * instead use
 * @code
 *	UIATarget *localTarget = [[UIAutomation targetClass] localTarget];
 * @endcode
 * Note, in this second correct case, you _can_ declare pointers to the
 * automation classes directly. Only, you cannot send any messages
 * directly. That would lead to a linker attempt to resolve the corresponding
 * symbols at link-time.
 */
@interface UIAutomation : NSObject

+ (Class)actionSheetClass;
+ (Class)activityIndicatorClass;
+ (Class)alertClass;
+ (Class)applicationClass;
+ (Class)buttonClass;
+ (Class)editingMenuClass;
+ (Class)elementClass;
+ (Class)elementArrayClass;
+ (Class)elementNilClass;
+ (Class)hostClass;
+ (Class)imageClass;
+ (Class)keyClass;
+ (Class)keyboardClass;
+ (Class)linkClass;
+ (Class)navigationBarClass;
+ (Class)pageIndicatorClass;
+ (Class)pickerWheelClass;
+ (Class)popoverClass;
+ (Class)progressIndicatorClass;
+ (Class)recorderClass;
+ (Class)recorderActionClass;
+ (Class)screenClass;
+ (Class)scrollViewClass;
+ (Class)searchBarClass;
+ (Class)secureTextFieldClass;
+ (Class)segmentedControlClass;
+ (Class)sliderClass;
+ (Class)staticTextClass;
+ (Class)statusBarClass;
+ (Class)switchClass;
+ (Class)syntheticEventsClass;
+ (Class)tabBarClass;
+ (Class)tableCellClass;
+ (Class)tableGroupClass;
+ (Class)tableViewClass;
+ (Class)targetClass;
+ (Class)textFieldClass;
+ (Class)textViewClass;
+ (Class)toolbarClass;
+ (Class)webViewClass;
+ (Class)windowClass;
+ (Class)xElementClass;
+ (Class)activityClass;
+ (Class)collectionCellClass;
+ (Class)collectionViewClass;
+ (Class)elementSynonymClass;
+ (Class)localizedValueClass;
+ (Class)mapViewClass;
+ (Class)remoteClass;

@end

/*
 * UIAutomation acts as a class-specific header and a monolithic project header
 * at the same time. This works most of the time. But there is one catch. The
 * UIAutomation.m source file imports this header for the class interface. It
 * does not require the private framework headers. Nor will it succeed in
 * importing those headers until the headers install and can be found at
 * <UIAutomation/NameOfSomeHeader.h> by the compiler. The compiler will fail
 * until after installation. To avoid this, UIAutomation.m defines
 * __UIAUTOMATION_NO_PRIVATE_FRAMEWORK_IMPORTS__ to exclude the private
 * framework headers from the import.
 */
#if !defined(__UIAUTOMATION_NO_PRIVATE_FRAMEWORK_IMPORTS__)

#import <UIAutomation/NSArray-UIAExtras.h>
#import <UIAutomation/NSValue-UIAutomation.h>
#import <UIAutomation/UIAActionSheet.h>
#import <UIAutomation/UIAActivityIndicator.h>
#import <UIAutomation/UIAAlert.h>
#import <UIAutomation/UIAApplication.h>
#import <UIAutomation/UIAButton.h>
#import <UIAutomation/UIAEditingMenu.h>
#import <UIAutomation/UIAElement.h>
#import <UIAutomation/UIAElementArray.h>
#import <UIAutomation/UIAElementNil.h>
#import <UIAutomation/UIAHost.h>
#import <UIAutomation/UIAImage.h>
#import <UIAutomation/UIAKey.h>
#import <UIAutomation/UIAKeyboard.h>
#import <UIAutomation/UIALink.h>
#import <UIAutomation/UIANavigationBar.h>
#import <UIAutomation/UIAPageIndicator.h>
#import <UIAutomation/UIAPicker.h>
#import <UIAutomation/UIAPickerWheel.h>
#import <UIAutomation/UIAPopover.h>
#import <UIAutomation/UIAProgressIndicator.h>
#import <UIAutomation/UIARecorder.h>
#import <UIAutomation/UIARecorderAction.h>
#import <UIAutomation/UIAScreen.h>
#import <UIAutomation/UIAScrollView.h>
#import <UIAutomation/UIASearchBar.h>
#import <UIAutomation/UIASecureTextField.h>
#import <UIAutomation/UIASegmentedControl.h>
#import <UIAutomation/UIASlider.h>
#import <UIAutomation/UIAStaticText.h>
#import <UIAutomation/UIAStatusBar.h>
#import <UIAutomation/UIASwitch.h>
#import <UIAutomation/UIASyntheticEvents.h>
#import <UIAutomation/UIATabBar.h>
#import <UIAutomation/UIATableCell.h>
#import <UIAutomation/UIATableGroup.h>
#import <UIAutomation/UIATableView.h>
#import <UIAutomation/UIATarget.h>
#import <UIAutomation/UIATextField.h>
#import <UIAutomation/UIATextView.h>
#import <UIAutomation/UIAToolbar.h>
#import <UIAutomation/UIAWebView.h>
#import <UIAutomation/UIAWindow.h>
#import <UIAutomation/UIAXElement-Protocol.h>
#import <UIAutomation/UIAXElement.h>
#import <UIAutomation/UIAActivityView.h>
#import <UIAutomation/UIACollectionCell.h>
#import <UIAutomation/UIACollectionView.h>
#import <UIAutomation/UIAElementSynonym.h>
#import <UIAutomation/UIALocalizedValue.h>
#import <UIAutomation/UIAMapView.h>
#import <UIAutomation/UIARemote.h>

#import <UIAutomation/Versioning.h>

#endif // __UIAUTOMATION_NO_PRIVATE_FRAMEWORK_IMPORTS__

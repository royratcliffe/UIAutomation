# UIAutomation Wrapper Library for iOS

Wrapper library for Apple's _private_ iOS UIAutomation framework. The library provides a single class called `UIAutomation` which loads the private framework dynamically and gives you a set of class methods for accessing the automation classes dynamically.

Use

```objc
UIATarget *localTarget = [[UIAutomation targetClass] localTarget];
```

to access the automation local target, for example. If not already loaded, asking for the class using `+targetClass` loads the private framework first. Same applies to any other `+[UIAutomation aClass]` method, where `a` stands for one of many available automation classes. Please see the `UIAutomation` class methods for the full list. Typically, though, you only need to access the local target. From that object you can navigate and interact with the hierarchy of applications, windows and views.

## Where do the UIAutomation headers come from?

Apple do not publish these directly. But they are available indirectly, as are all Objective-C class interfaces, from within the binary using Steve Nygard's [class-dump](http://www.codethecode.com/projects/class-dump/). From this project's `UIAutomation` sub-folder, enter:

	UIAutomation$ class-dump -H /Applications/Xcode44-DP7.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator5.1.sdk/Developer/Library/PrivateFrameworks/UIAutomation.framework

Note the `/Applications/Xcode44-DP7.app`. The headers originate from within Xcode 4.4 Golden Master, developer preview 7. Also note the `iPhoneSimulator5.1.sdk`. The headers come from the iOS 5.1 simulator SDK.

## MIT Licensing

Copyright © 2012, The OCCukes Organisation. All rights reserved.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the “Software”), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be included in
	all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED “AS IS,” WITHOUT WARRANTY OF ANY KIND, EITHER
EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT. IN NO
EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES
OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
DEALINGS IN THE SOFTWARE.

## Sponsors

- Levide Capital Limited, Blenheim, New Zealand

## Contributors

- Roy Ratcliffe, Pioneering Software, United Kingdom

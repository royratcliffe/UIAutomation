# UIAutomation Wrapper Library for iOS

Wrapper library for Apple's _private_ iOS UIAutomation framework. The library provides a single class called `UIAutomation` which loads the private framework dynamically and gives you a set of class methods for accessing the automation classes dynamically.

Use

```objc
UIATarget *localTarget = [[UIAutomation targetClass] localTarget];
```

to access the automation local target, for example. If not already loaded, asking for the class using `+targetClass` loads the private framework first. Same applies to any other `+[UIAutomation aClass]` method, where `a` stands for one of many available automation classes.

## Where do the UIAutomation headers come from?

Apple do not publish these directly. But they are available indirectly, as are all Objective-C class interfaces, from within the binary using Steve Nygard's [class-dump](http://www.codethecode.com/projects/class-dump/). From this project's `UIAutomation` sub-folder, enter:

	UIAutomation$ class-dump -H /Applications/Xcode44-DP7.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator5.1.sdk/Developer/Library/PrivateFrameworks/UIAutomation.framework

Note the `/Applications/Xcode44-DP7.app`. The headers originate from within Xcode 4.4 Golden Master, developer preview 7. Also note the `iPhoneSimulator5.1.sdk`. The headers come from the iOS 5.1 simulator SDK.


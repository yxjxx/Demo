# Demo

```
xcodebuild clean & xcodebuild -workspace /Users/yxj/Desktop/Demo/Demo.xcworkspace -scheme Demo | xcpretty -r json-compilation-database --output ./compile_commands.json
```

```
/Users/yxj/Developer/LLVM/llvm-project/build/Debug/bin/LibToolingDemo /Users/yxj/Desktop/Demo/Demo/ViewController.m -- objective-c -arch x86_64 -std=gnu99 -fobjc-arc -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk -mios-simulator-version-min=8.0 -F/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks -I/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include/c++/v1 -I/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/usr/include -v
```
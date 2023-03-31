# Demo

```
xcodebuild clean & xcodebuild -workspace /Users/yxj/Desktop/Demo/Demo.xcworkspace -scheme Demo | xcpretty -r json-compilation-database --output ./compile_commands.json
```

```
/Users/yxj/Developer/LLVM/llvm-project/build/Debug/bin/LibToolingDemo /Users/yxj/Desktop/Demo/Demo/ViewController.m -- objective-c -arch x86_64 -std=gnu99 -fobjc-arc -isysroot /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk -mios-simulator-version-min=8.0 -F/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks -I/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include/c++/v1 -I/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/usr/include -v
```

fatal error: 'SDWebImage/SDWebImage.h' file not found
#import <SDWebImage/SDWebImage.h>
        ^~~~~~~~~~~~~~~~~~~~~~~~~


```
clang version 17.0.0 (https://github.com/llvm/llvm-project.git 8db8a4e8eddf91bfaee62f83ff10a51e7125d4e4)
Target: x86_64-apple-darwin22.3.0
Thread model: posix
InstalledDir:
ignoring nonexistent directory "../include/c++/v1"
clang version 17.0.0 (https://github.com/llvm/llvm-project.git 8db8a4e8eddf91bfaee62f83ff10a51e7125d4e4)
Target: x86_64-apple-darwin22.3.0
Thread model: posix
InstalledDir: /Users/yxj/Developer/LLVM/llvm-project/build/Debug/bin
clang Invocation:
 "/Users/yxj/Developer/LLVM/llvm-project/build/Debug/bin/clang-tool" "-cc1" "-triple" "x86_64-apple-ios8.0.0-simulator" "-Wundef-prefix=TARGET_OS_" "-Werror=undef-prefix" "-Wdeprecated-objc-isa-usage" "-Werror=deprecated-objc-isa-usage" "-Werror=implicit-function-declaration" "-fsyntax-only" "-disable-free" "-clear-ast-before-backend" "-main-file-name" "ViewController.m" "-mrelocation-model" "pic" "-pic-level" "2" "-mframe-pointer=all" "-ffp-contract=on" "-fno-rounding-math" "-funwind-tables=2" "-faligned-alloc-unavailable" "-target-sdk-version=16.2" "-fcompatibility-qualified-id-block-type-checking" "-fvisibility-inlines-hidden-static-local-var" "-target-cpu" "core2" "-tune-cpu" "generic" "-mllvm" "-treat-scalable-fixed-error-as-warning" "-debugger-tuning=lldb" "-target-linker-version" "820.1" "-v" "-fcoverage-compilation-dir=/Users/yxj/Developer/LLVM/llvm-project/build/Debug/bin" "-resource-dir" "/Users/yxj/Developer/LLVM/llvm-project/build/Debug/lib/clang/17" "-isysroot" "/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk" "-F/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks" "-I" "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include/c++/v1" "-I" "/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/usr/include" "-internal-isystem" "/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/usr/local/include" "-internal-isystem" "/Users/yxj/Developer/LLVM/llvm-project/build/Debug/lib/clang/17/include" "-internal-externc-isystem" "/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/usr/include" "-std=gnu99" "-fdebug-compilation-dir=/Users/yxj/Developer/LLVM/llvm-project/build/Debug/bin" "-ferror-limit" "19" "-stack-protector" "1" "-fblocks" "-fencode-extended-block-signature" "-fregister-global-dtors-with-atexit" "-fgnuc-version=4.2.1" "-fobjc-runtime=ios-8.0.0" "-fobjc-arc" "-fobjc-exceptions" "-fexceptions" "-fmax-type-align=16" "-fcolor-diagnostics" "-D__GCC_HAVE_DWARF2_CFI_ASM=1" "-x" "objective-c" "/Users/yxj/Desktop/Demo/Demo/ViewController.m"

clang -cc1 version 17.0.0 based upon LLVM 17.0.0git default target x86_64-apple-darwin22.3.0
ignoring nonexistent directory "/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/usr/local/include"
ignoring nonexistent directory "/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/Library/Frameworks"
ignoring duplicate directory "/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/usr/include"
  as it is a non-system directory that duplicates a system directory
ignoring duplicate directory "/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks"
  as it is a non-system directory that duplicates a system directory
#include "..." search starts here:
#include <...> search starts here:
 /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/include/c++/v1
 /Users/yxj/Developer/LLVM/llvm-project/build/Debug/lib/clang/17/include
 /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/usr/include
 /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks (framework directory)
End of search list.
/Users/yxj/Desktop/Demo/Demo/ViewController.m:9:9: fatal error: 'SDWebImage/SDWebImage.h' file not found
#import <SDWebImage/SDWebImage.h>
        ^~~~~~~~~~~~~~~~~~~~~~~~~
HandleTranslationUnit。
Found Objective-C method call: respondsToSelector:
Found Objective-C method call: currentDevice
Found Objective-C method call: userInterfaceIdiom
Found Objective-C method call: currentDevice
Found Objective-C method call: viewDidLoad
Found Objective-C method call: view
Found Objective-C method call: whiteColor
Found Objective-C method call: setBackgroundColor:
Found Objective-C method call: initWithFrame:
Found Objective-C method call: alloc
Found Objective-C method call: addSubview:
Found Objective-C method call: view
Found Objective-C method call: URLWithString:
End(test LibToolingDemo)
1 error generated.
Error while processing /Users/yxj/Desktop/Demo/Demo/ViewController.m.
```
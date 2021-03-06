# CSNLINEOpener

[![CocoaPods](http://img.shields.io/cocoapods/v/CSNLINEOpener.svg)](http://cocoadocs.org/docsets/CSNLINEOpener)
![](http://img.shields.io/badge/license-MIT-green.svg)

## Overview

CSNLINEOpener provides "LINE it!". Please read the [Guidelines](http://media.line.me/guideline/en/ "Guidelines - The LINE it!") before use.

`CSNLINEOpener` is simple class that sends text OR image to LINE.app. `CSNLINEOpenerActivity` is subclass of UIActivity.

## Requirements

* iOS 6 or Later
* ARC

## Usage

[CocoaDocs](http://cocoadocs.org/docsets/CSNLINEOpener/) for more infomation.

### CSNLineOpener

```objc
if ([CSNLINEOpener canOpenLINE]) {
    [CSNLINEOpener openLINEAppWithText:someText];
} else {
    [CSNLINEOpener openAppStore];
}
```

### CSNLINEOpenerActivity

```objc
NSArray *applicationActivities = @[[[CSNLINEOpenerActivity alloc] initWithTitle:@"LINEで送る" icon:[UIImage imageNamed:@"icon"]]];
UIActivityViewController *activityViewController = [[UIActivityViewController alloc] initWithActivityItems:@[text, icon]
                                                                                    applicationActivities:applicationActivities];
[self presentViewController:activityViewController animated:YES completion:NULL];
```

## Caution

`CSLINEOpener` overrides existing data in `generalPasteboard` when sends image to LINE.app. cause we can't use named pasteboard to pass image from 3rd party application since iOS 7.

## Install

```ruby
pod 'CSNLINEOpener', '~> 0.0'
```

## License

MIT License

//
//  CSNLineOpenerActivity.h
//
//  Created by griffin_stewie on 2013/02/01.
//  Copyright (c) 2013 griffin_stewie
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.

#import <UIKit/UIKit.h>

/**
 UIActivity class that using `CSNLineOpener`
 */

@interface CSNLINEOpenerActivity : UIActivity

/**
 Initializes and returns a new UIActivity object.
 
 @param title A user-readable string describing the service. If nil, 'LINE' by default.
 
 @param icon An image that identifies the service to the user. If nil, nil by default.
 
 @discussion designed initializer.
 
 @return instance of UIActivity,
 */
- (id)initWithTitle:(NSString *)title icon:(UIImage *)icon;

@end

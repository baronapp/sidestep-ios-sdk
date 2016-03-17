//
//  UITextField+CursorPosition.h
//  Sidestep
//
//  Created by Denis Korneev on 03/03/16.
//  Copyright © 2016 Sidestep Technologies Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UITextField(CursorPosition)
+ (void)selectTextForInput:(UITextField *)input atRange:(NSRange)range;
- (void)selectTextAtRange:(NSRange)range;
@end

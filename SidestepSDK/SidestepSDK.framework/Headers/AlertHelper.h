//
// Created by Dmitry Korotchenkov on 23/03/15.
// Copyright (c) 2015 BlueBird LLC. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface AlertHelper : NSObject
+ (void)showAlertWithTitle:(NSString *)title message:(NSString *)message;

+ (void)showAlertWithMessage:(NSString *)message;

+ (void)showDefaultError;
@end
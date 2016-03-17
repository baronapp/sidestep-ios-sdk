//
// File: ButtonBuilder.h
// Project: Sidestep
//
// Created by dkorneev on 04/09/14.
// Copyright (c) 2014 BlueBird LLC. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ButtonBuilder : NSObject
+ (UIBarButtonItem *)menuBarButtonItemWithTarget:(id)target andAction:(SEL)action;

+ (UIBarButtonItem *)backBarButtonItemWithTarget:(id)target andAction:(SEL)action;

+ (UIBarButtonItem *)closeBarButtonItemwithTarget:(id)target andAction:(SEL)action;
@end
//
// File: CartButton.h
// Project: Sidestep
//
// Created by dkorneev on 2/17/14.
// Copyright (c) 2014 BlueBird LLC. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface CartButton : UIButton

+ (UIBarButtonItem *)createBarButtonItemWithTarget:(id)target1 andAction:(SEL)action;

@property(nonatomic) NSUInteger value;

@end
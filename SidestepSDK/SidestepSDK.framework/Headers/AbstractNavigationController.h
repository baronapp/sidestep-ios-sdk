//
// File: AbstractNavigationController.h
// Project: Sidestep
//
// Created by dkorneev on 3/9/14.
// Copyright (c) 2014 BlueBird LLC. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "TealNavigationController.h"

@interface UIViewController (BackGestureSupport)
- (BOOL)backGestureEnabled;
@end

@interface AbstractNavigationController : TealNavigationController
@end

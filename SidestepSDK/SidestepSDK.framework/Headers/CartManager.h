//
// File: CartManager.h
// Project: Sidestep
//
// Created by dkorneev on 2/20/14.
// Copyright (c) 2014 BlueBird LLC. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

static NSString *const kCartDidUpdateNotification = @"CartDidUpdateNotification";

@protocol ObjcListMonitorDelegate;

@interface CartManager : NSObject <ObjcListMonitorDelegate>
+ (instancetype)sharedManager;

- (void)resetContext;
- (NSInteger)numberOfOrderItems;

@end
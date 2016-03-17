//
// Created by Denis Korneev on 24/08/15.
// Copyright (c) 2015 BlueBird LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CartView.h"
#import <CoreData/CoreData.h>
#import "CartFlowConfiguratorDelegate.h"

@class CartView;
@class CACartFlowConfigurator;
@protocol OrderCartWorkerDelegate;
@protocol NavigationDelegate;
@protocol CartFlowConfiguratorProtocol;

extern NSString *const __nonnull kPickUpMethodHasBeenChangedInCart;

@interface CartController : UIViewController
        <CartViewDelegate, CartViewDataSource,
        OrderCartWorkerDelegate, CartFlowConfiguratorDelegate>

- (instancetype __nonnull)initWithDelegate:(id <NavigationDelegate> __nullable)delegate cartFlowConfugurator:(id <CartFlowConfiguratorProtocol> __nullable)cartFlowConfugurator;
@property (nonatomic, weak) id<NavigationDelegate> __nullable delegate;
@property (nonatomic, strong) id<CartFlowConfiguratorProtocol> __nullable cartFlowConfugurator;
@end
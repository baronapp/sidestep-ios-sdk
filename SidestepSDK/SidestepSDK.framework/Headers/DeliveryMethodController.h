//
// Created by Denis Korneev on 04/09/15.
// Copyright (c) 2015 BlueBird LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class DeliveryMethodView;


@interface DeliveryMethodController : UIViewController

@property (nonatomic, strong) UIImage *bgImage;

@property (nonatomic, copy) void (^pickUpAtShowButtonAction)(void);
@property (nonatomic, copy) void (^shipToAddressButtonAction)(void);
@property (nonatomic, copy) void (^closeButtonAction)(void);

@end
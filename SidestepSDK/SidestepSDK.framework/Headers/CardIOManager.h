//
//  CardIOManager.h
//  Sidestep
//
//  Created by Dmitry Korotchenkov on 11/03/16.
//  Copyright © 2016 Sidestep Technologies Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface CardIOManager : NSObject

@property (nonatomic, copy) void (^cancelBlock)();
@property (nonatomic, copy) void (^obtainCardBlock)(NSString *cardNumber, NSString *csv, NSUInteger expiryMonth, NSUInteger expiryYear);

- (UINavigationController *)createCardIOPaymentViewController:(UIColor *)navigationBarTintColor;

@end

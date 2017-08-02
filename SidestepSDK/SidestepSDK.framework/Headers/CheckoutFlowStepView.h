//
// Created by dkorneev on 09/07/14.
// Copyright (c) 2014 BlueBird LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface CheckoutFlowStepView : UIView
+ (instancetype)createWithFrame:(CGRect)frame andTitle:(NSString *)title;

- (void)setTitle:(NSString *)title;
@end
//
// File: NoItemsView.h
// Project: Sidestep
//
// Created by dkorneev on 4/5/14.
// Copyright (c) 2014 BlueBird LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void(^ActionBlock)();

@interface NoItemsView : UIView

@property (nonatomic, strong) NSString * __nullable messageText;

+ (__nonnull instancetype)new;

- (void)setButtonTitle:(NSString * __nullable)buttonTitle action:(ActionBlock __nullable)action;

- (void)setActionButtonHidden:(BOOL)hidden;

@end

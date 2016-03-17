//
// Created by Denis Korneev on 12/02/15.
// Copyright (c) 2015 BlueBird LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class ProductDetailsControlCell;

@interface ProductDetailsControlCell : UITableViewCell

+ (NSString *)reuseIdentifier;

+ (CGFloat)height;

@property(nonatomic, copy) void (^addToCartBlock)(ProductDetailsControlCell *);

- (void)setButtonTitle:(NSString *)title;

@end
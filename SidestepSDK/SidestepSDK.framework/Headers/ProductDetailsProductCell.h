//
// Created by Denis Korneev on 12/02/15.
// Copyright (c) 2015 BlueBird LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class Product;

@interface ProductDetailsProductCell : UITableViewCell

+ (NSString *)reuseIdentifier;

+ (CGFloat)height;

- (void)setTitle:(NSString *)title
           price:(NSString *)price
        imageUrl:(NSURL *)imageUrl;

@end
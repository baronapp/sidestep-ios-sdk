//
// Created by Denis Korneev on 12/02/15.
// Copyright (c) 2015 BlueBird LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ProductDetailsOtherProductsDataSource.h"
#import <UIKit/UIKit.h>

@class ProductDetailsOtherProductsDataSource;
@class ObjcListMonitor;

@protocol ProductDetailsOtherProductsCellDelegate <NSObject>
- (void)didSelectProduct:(Product *)product;
@end

@interface ProductDetailsOtherProductsCell
    : UITableViewCell <ProductDetailsOtherProductsDelegate>

+ (NSString *)reuseIdentifier;

+ (CGFloat)height;

- (void)setListMonitor:(ObjcListMonitor *)objcListMonitor currency:(NSString *)currency;

@property(nonatomic, weak) id<ProductDetailsOtherProductsCellDelegate> delegate;

@end
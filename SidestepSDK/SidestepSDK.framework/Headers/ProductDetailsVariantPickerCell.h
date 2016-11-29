//
// Created by Denis Korneev on 11/09/15.
// Copyright (c) 2015 BlueBird LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define NoSelectedSize NSUIntegerMax

@interface ProductDetailsVariantPickerCell : UITableViewCell

@property(nonatomic, strong) NSArray *sizes;

@property(nonatomic, copy) void (^didChangeProductVariant)
    (ProductDetailsVariantPickerCell *);

+ (NSString *)reuseIdentifier;

+ (CGFloat)height;

- (void)setDisabledButtons:(NSIndexSet *)disabledButtons;

- (void)updateSegmentedControl;

- (void)setSelectedSize:(NSUInteger)selectedSize;

- (NSUInteger)selectedSize;

- (void)setSizes:(NSArray *)sizes andPrices:(NSArray *)prices;

@end
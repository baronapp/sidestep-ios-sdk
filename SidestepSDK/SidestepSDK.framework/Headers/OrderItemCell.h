//
// File: OrderItemCell.h
// Project: Sidestep
//
// Created by dkorneev on 2/12/14.
// Copyright (c) 2014 BlueBird LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class OrderItemCell;

typedef NS_ENUM(NSUInteger, CartItemCellState) {
  CartItemCellStateNormal,
  CartItemCellStateError
};

@protocol CartItemCellDelegate <NSObject>
@required
- (void)didTapSizeButtonInCell:(OrderItemCell *)cell;
- (void)didTapCountButtonInCell:(OrderItemCell *)cell;
- (void)didTapDeleteItemButtonInCell:(OrderItemCell *)cell;
- (void)didTapChangeButtonInCell:(OrderItemCell *)cell;
@end

@interface OrderItemCell : UITableViewCell

+ (NSString *)reuseIdentifier;

+ (CGFloat)height;

@property(nonatomic, strong) id<NSObject> userInfo;

@property(nonatomic, weak) id<CartItemCellDelegate> delegate;

@property(nonatomic, strong) NSString *size;
@property(nonatomic) CartItemCellState state;

- (void)setTitle:(NSString *)title;

- (void)setCount:(NSString *)count;

- (void)setPrice:(NSString *)price;

- (void)setImageUrl:(NSURL *)imageUrl;

- (void)setEnabled:(BOOL)enabled;

- (void)setInteractive:(BOOL)interactive;

- (void)setDeleteButtonHidden:(BOOL)hidden;

@end
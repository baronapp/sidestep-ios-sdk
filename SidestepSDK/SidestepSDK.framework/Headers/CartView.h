//
// Created by Denis Korneev on 24/08/15.
// Copyright (c) 2015 BlueBird LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "OrderItemCell.h"

@class OrderItem;
@class NoItemsView;
@class Address;
@class Show;

typedef enum {
    CartViewDeliveryMethodNotSet,
    CartViewDeliveryMethodPickup,
    CartViewDeliveryMethodDelivery,
    CartViewDeliveryMethodPickupOnly
} CartViewDeliveryMethod;

@protocol CartViewDataSource <NSObject>
- (NSUInteger)numberOfOrderItems;
- (OrderItem *)orderItemAtIndex:(NSUInteger)index;
- (CartViewDeliveryMethod)deliveryMethod;
- (Address *)deliveryAddress;
- (Show *)pickupShow;
- (BOOL)allItemsAreAvailable;
@end

@protocol CartViewDelegate <NSObject>
@optional
- (void)deleteOrderItemWithId:(NSNumber *)orderItemId;
- (void)changeQuantityForOrderItemWithId:(NSNumber *)orderItemId;
- (void)changeProductVariantForOrderItemWithId:(NSNumber *)orderItemId;
- (void)changeOrderItemWithId:(NSNumber *)orderItemId;
- (void)checkout;
- (void)changeShow;
- (void)changeDeliveryAddress;
- (void)didSelectDelivery;
- (void)didSelectPickUpAtShow;
- (void)goToStore;
@end

@interface CartView : UIView <UITableViewDataSource, UITableViewDelegate, CartItemCellDelegate>
+ (instancetype)create;

- (void)reloadData;

@property(nonatomic, weak) id<CartViewDataSource> dataSource;
@property(nonatomic, weak) id<CartViewDelegate> delegate;

@end
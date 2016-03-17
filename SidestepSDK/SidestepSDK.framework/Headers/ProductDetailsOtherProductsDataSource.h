//
// File: ProductDetailsOtherProductsDataSource.h
// Project: Sidestep
//
// Created by dkorneev on 2/6/14.
// Copyright (c) 2014 BlueBird LLC. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "ProductCell.h"

@class Artist;
@class Product;
@class ObjcListMonitor;
@protocol ObjcListMonitorDelegate;

@protocol ProductDetailsOtherProductsDelegate <NSObject>
@optional
- (void)didSelectProduct:(Product *)product;
@end


@interface ProductDetailsOtherProductsDataSource : NSObject
        <UICollectionViewDataSource, UICollectionViewDelegate,
        ObjcListMonitorDelegate, UICollectionViewDelegateFlowLayout>

@property (weak, nonatomic) id<ProductDetailsOtherProductsDelegate> delegate;

- (instancetype)initWithCollectionView:(UICollectionView *)collectionView
                       andObjcListMonitor:(ObjcListMonitor *)objcListMonitor
                                  currency:(NSString *)currency
                       productCellType:(ProductCellType)productCellType;

@end
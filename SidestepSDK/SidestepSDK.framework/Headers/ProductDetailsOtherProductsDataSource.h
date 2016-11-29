//
// File: ProductDetailsOtherProductsDataSource.h
// Project: Sidestep
//
// Created by dkorneev on 2/6/14.
// Copyright (c) 2014 BlueBird LLC. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import <UIKit/UIKit.h>

@class Artist;
@class Product;

@protocol ProductDetailsOtherProductsDelegate <NSObject>
@optional
- (void)didSelectProduct:(Product *)product;
@end


@interface ProductDetailsOtherProductsDataSource : NSObject
        <UICollectionViewDataSource, UICollectionViewDelegate,
        NSFetchedResultsControllerDelegate, UICollectionViewDelegateFlowLayout>

@property (weak, nonatomic) id<ProductDetailsOtherProductsDelegate> delegate;

- (instancetype)initWithCollectionView:(UICollectionView *)collectionView
                                   frc:(NSFetchedResultsController *)frc
                                  currency:(NSString *)currency;

@end

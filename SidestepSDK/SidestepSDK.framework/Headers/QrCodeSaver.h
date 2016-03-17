//
// Created by dkorneev on 21/07/14.
// Copyright (c) 2014 BlueBird LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol CodeSaverDataSource <NSObject>
- (UICollectionViewCell *)cellForIndexPath:(NSIndexPath *)indexPath; // method must not use collection view cache!
- (UICollectionView *)collectionView;
@end

@interface QrCodeSaver : NSObject

- (instancetype)initWithDataSource:(id <CodeSaverDataSource>)dataSource;

- (void)saveForSection:(int)section andCellClass:(Class)cellClass withCompletion:(void (^)(void))completion;

@end
//
//  ProductCell.h
//  Sidestep
//
//  Created by Pavel on 21.01.14.
//  Copyright (c) 2014 BlueBird LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum {
  ProductCellTypeAllArtists = 1,
  ProductCellTypeExclusives
} ProductCellType;

@class Product;

@interface ProductCell : UICollectionViewCell

@property(assign, nonatomic) ProductCellType cellType;

+ (NSString *)reuseIdentifier;

- (void)setTitle:(NSString *)title
     artistTitle:(NSString *)artistTitle
           price:(NSString *)price
        imageURL:(NSURL *)imageUrl;

@end

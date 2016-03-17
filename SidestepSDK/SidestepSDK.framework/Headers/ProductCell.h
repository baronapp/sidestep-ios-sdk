//
//  ProductCell.h
//  Sidestep
//
//  Created by Pavel on 21.01.14.
//  Copyright (c) 2014 BlueBird LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Product;

@interface ProductCell : UICollectionViewCell

+ (NSString *)reuseIdentifier;

- (void)setTitle:(NSString *)title
     artistTitle:(NSString *)artistTitle
           price:(NSString *)price
        imageURL:(NSURL *)imageUrl
    forIndexPath:(NSIndexPath *)indexPath;

@end
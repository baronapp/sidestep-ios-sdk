//
// Created by Denis Korneev on 08/09/15.
// Copyright (c) 2015 BlueBird LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface OrderCompletionDeliveryOrderCell : UICollectionViewCell

+ (NSString *)reuseId;

+ (CGFloat)height;

+ (UINib *)nib;

- (void)setCode:(NSString *)code description:(NSString *)description;

@end

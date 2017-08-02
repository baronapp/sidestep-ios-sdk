//
// Created by dkorneev on 07/07/14.
// Copyright (c) 2014 BlueBird LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface OrderCompletionPickupOrderCell : UICollectionViewCell

+ (instancetype)instantiateFromNib;

+ (NSString *)reuseId;

+ (CGFloat)height;

+ (UINib *)nib;

- (void)setConfirmationCode:(NSString *)code
                     artist:(NSString *)artist
                      venue:(NSString *)venue
                   showDate:(NSString *)showDate
                     qrCode:(NSString *)qrCode;

@end

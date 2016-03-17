//
// File: SizePickerCell.h
// Project: Sidestep
//
// Created by dkorneev on 2/10/14.
// Copyright (c) 2014 BlueBird LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AbstractPickerCell.h"

@interface SizePickerCell : AbstractPickerCell
+ (NSString *)reuseIdentifier;
+ (CGFloat)height;
- (void)setTitle:(NSString *)title;
- (void)setAttributedTitle:(NSAttributedString *)title;
@end
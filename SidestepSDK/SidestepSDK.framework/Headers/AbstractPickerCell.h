//
// File: AbstractPickerCell.h
// Project: Sidestep
//
// Created by dkorneev on 2/10/14.
// Copyright (c) 2014 BlueBird LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef enum {
  PickerCellPositionTop,
  PickerCellPositionMiddle,
  PickerCellPositionBottom
} PickerCellPosition;

@interface AbstractPickerCell : UITableViewCell

@property(nonatomic) BOOL checked;

@property(nonatomic) BOOL isCheckable;

+ (CGFloat)height;

+ (NSString *)reuseIdentifier;

- (void)setPosition:(PickerCellPosition)position;

@end
//
// File: AbstractPickerController.h
// Project: Sidestep
//
// Created by dkorneev on 2/4/14.
// Copyright (c) 2014 BlueBird LLC. All rights reserved.
//


#import <Foundation/Foundation.h>
#import "AbstractPickerCell.h"

@class AbstractPickerView;

@interface AbstractPickerController : UIViewController <UITableViewDataSource, UITableViewDelegate>

- (instancetype)init;

@property(nonatomic) BOOL showCloseButton;

@property(copy) void (^completionBlock)(id selectedItem);

@property(nonatomic, strong) NSString *pickerTitle;

- (void)setPickerTitle:(NSString *)pickerTitle;

- (UITableView *)tableView;

- (void)setItems:(NSArray *)items;

- (void)setSelectedItemNum:(NSUInteger)itemNum;

- (id)selectedItem;

- (CGFloat)heightForCell;

- (void)showBottomButtonWithTitle:(NSString *)title handler:(void (^)())handler;

- (AbstractPickerCell *)tableView:(UITableView *)tableView cellForItem:(id)item;

- (NSString *)noItemsMessage;

@end
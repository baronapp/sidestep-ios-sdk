//
// Created by Dmitry Korotchenkov on 27/01/15.
// Copyright (c) 2015 Sidestep LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface PreviewController : UIViewController <UIScrollViewDelegate>

@property(nonatomic, copy) void (^dismissBlock)(PreviewController *previewController);

@property(nonatomic, strong) UIViewController *contentController;

@property(nonatomic, copy) void (^hideStateAnimationBlock)();
@property(nonatomic, copy) void (^showStateAnimationBlock)();

- (instancetype)initWithContentView:(UIView *)view;

- (instancetype)initWithContentController:(UIViewController *)controller;

- (void)setContentView:(UIView *)contentView;

- (void)setBackgroundView:(UIView *)view;

- (void)setCancelButton:(UIButton *)button;

- (void)setContentTopMargin:(NSNumber *)top bottomMargin:(NSNumber *)bottom height:(NSNumber *)height;

- (void)setContentLeftMargin:(NSNumber *)left rightMargin:(NSNumber *)right width:(NSNumber *)width;

- (void)presentInView:(UIView *)view;

- (void)dismissPreviewController:(BOOL)animated;

- (void)dismissPreviewController;
@end

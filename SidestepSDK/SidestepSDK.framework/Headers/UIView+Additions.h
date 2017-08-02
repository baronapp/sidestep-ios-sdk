//
// File: UIView+Additions.h
// Project: youdo
//
// Created by dkorneev on 10/22/13.
// Copyright (c) 2013 ProgressEngine. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface UIView (Additions)

- (id) initWithParent:(UIView *)parent;

- (void)addNailedToBordersSubview:(UIView *)subview;

- (void)addConstraintsToSubview:(UIView *)subview
                withStartMetric:(NSNumber *)startMetric
                      endMetric:(NSNumber *)endMetric
                           size:(NSNumber *)size
                     isVertical:(BOOL)isVertical;

- (void)addNailedToBorderSubview:(UIView *)subview
                     forTopGuide:(id <UILayoutSupport>)topGuide
                  forBottomGuide:(id <UILayoutSupport>)bottomGuide;

- (void)addNailedToTheBottomView:(UIView *)subview withHeight:(CGFloat)height;

+ (id) viewWithParent:(UIView *)parent;

- (id)findFirstResponder;

@end

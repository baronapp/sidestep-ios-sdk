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

- (void)addSubview:(UIView *)subview withConstraintsToSuperViewTop:(NSNumber *)top bottom:(NSNumber *)bottom left:(NSNumber *)left right:(NSNumber *)right width:(NSNumber *)width height:(NSNumber *)height;

- (void)addConstraintsToSubview:(UIView *)subview withStartMetric:(NSNumber *)startMetric endMetric:(NSNumber *)endMetric size:(NSNumber *)size isVertical:(BOOL)isVertical;

- (void)addConstraintsToSubview:(UIView *)subview withStartMetric:(NSNumber *)startMetric startElement:(id)startElement endMetric:(NSNumber *)endMetric endElement:(id)endElement size:(NSNumber *)size isVertical:(BOOL)isVertical;

- (void)addNailedToTheBottmView:(UIView *)subview withHeight:(NSUInteger)height;

- (void)addNailedToBorderSubview:(UIView *)subview forTopGuide:(id <UILayoutSupport>)topGuide forBottomGuide:(id <UILayoutSupport>)bottomGuide;

+ (id) viewWithParent:(UIView *)parent;

// Position of the top-left corner in superview's coordinates
@property CGPoint position;
@property CGFloat x;
@property CGFloat y;
@property CGFloat top;
@property CGFloat bottom;
@property CGFloat left;
@property CGFloat right;

// makes hiding more logical
@property BOOL        visible;

// Setting size keeps the position (top-left corner) constant
@property CGSize size;
@property CGFloat width;
@property CGFloat height;

- (id)findFirstResponder;

@end
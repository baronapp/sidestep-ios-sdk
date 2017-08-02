//
//  UIView.h
//  Sidestep
//
//  Created by Denis Korneev on 12/04/2017.
//  Copyright © 2017 Sidestep Technologies Inc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface UIView (PositionAndSize)
@property CGPoint position;
@property CGFloat x;
@property CGFloat y;
@property CGFloat top;
@property CGFloat bottom;
@property CGFloat left;
@property CGFloat right;
@property CGSize size;
@property CGFloat width;
@property CGFloat height;
@property BOOL visible;
@end

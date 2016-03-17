//
//  FloatedButtonView.h
//  Sidestep
//
//  Created by Dmitry Korotchenkov on 28/08/15.
//  Copyright (c) 2015 BlueBird LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FloatedButtonView : UIView

- (void)setTitle:(NSString *)title;
- (void)addTarget:(id)target action:(SEL)action;

@end

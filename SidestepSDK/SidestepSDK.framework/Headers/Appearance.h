//
//  Appearance.h
//  Sidestep
//
//  Created by Victor Kinelev on 21.01.14.
//  Copyright (c) 2014 BlueBird LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

extern UIColor *UIColorWithRGB(NSUInteger red, NSUInteger green, NSUInteger blue);
extern UIColor *UIColorWithRGBA(NSUInteger red, NSUInteger green, NSUInteger blue, CGFloat alpha);

@interface Appearance : NSObject

+ (void)setupCommonAppearance;

+ (UIFont *)navigationBarTitleFont;
+ (UIFont *)artistTitleFont;

+ (UIColor*)inputFieldValueColor;
+ (UIColor*)inputFieldTitleColor;
+ (UIFont*)inputFieldFont;

+ (UIFont *)csvLabelTitleFont;
+ (UIColor *)separatorColor;
+ (UIColor *)paymentButtonTitleColor;
+ (UIFont *)paymentButtonTitleFont;

+ (UIFont *)emailSentMessageFont;
+ (UIColor *)emailSentMessageColor;

+ (UIColor *)blurColor;

+ (UIFont *)barButtonItemTitleFont;

+ (UIFont *)emptyCellButtonTitleFont;

+ (void)configureRoundedWhiteButtonWithBorder:(UIButton *)button;
+ (void)configureRoundedWhiteButtonWithBorder:(UIButton *)button borderColor:(UIColor *)borderColor titleColor:(UIColor *)titleColor;

@end

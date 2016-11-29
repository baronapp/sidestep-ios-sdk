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

+ (UIColor *)standardRedColor;
+ (UIFont*)cartErrorFont;
+ (UIColor *)cartErrorBackgroundColor;

+ (UIFont *)navigationBarTitleFont;
+ (UIFont *)productPriceFont;
+ (UIFont *)productTitleFont;
+ (UIFont *)artistTitleFont;

+ (UIFont *)artistDetails1Font;

+ (UIFont *)artistStatusFont;
+ (UIFont *)todaysArtistTitleFont;
+ (UIFont *)menuCellTitleFont;

+ (UIColor *)searchResultCellsBG;
+ (UIFont *)searchResultCellsFont;
+ (UIColor *)searchResultCellsColor;

+ (UIColor *)productBottomTitleColor;
+ (UIFont *)productBottomTitleFont;

+ (UIFont *)landingSkipFont;
+ (UIColor *)landingSignColor;

+ (UIColor *)showPickerTitleDefaultColor;
+ (UIColor *)showPickerTitleSelectedColor;
+ (UIFont *)showPickerTitleFont;
+ (UIColor *)showPickerSubtitleDefaultColor;
+ (UIColor *)showPickerSubtitleSelectedColor;
+ (UIFont *)showPickerSubtitleFont;

+ (UIColor *)pickerHeaderTitleColor;
+ (UIFont *)pickerHeaderTitleFont;

+ (UIColor *)sizePickerTitleDefaultColor;
+ (UIColor *)sizePickerTitleSelectedColor;
+ (UIFont *)sizePickerAbbreviationFont;
+ (UIFont *)sizePickerDecipheringFont;

+ (UIColor *)cartSectionHeaderColor;
+ (UIFont *)cartSectionHeaderFont;
+ (UIColor *)cartItemTitleColor;
+ (UIFont *)cartItemTitleFont;
+ (UIFont *)cartItemInfoFont;
+ (UIColor *)cartItemSizeColor;
+ (UIFont *)cartItemSizeFont;
+ (UIFont *)cartItemSizeXFont;
+ (UIColor *)cartItemButtonColor;
+ (UIFont *)cartItemButtonFont;
+ (UIColor *)cartItemPriceColor;
+ (UIFont *)cartItemPriceFont;

+ (UIFont *)cartSummaryLabelFont;
+ (UIFont *)cartSummaryValueLabelFont;
+ (UIColor *)cartSummaryTotalLabelColor;
+ (UIFont *)cartSummaryCheckoutButtonFont;

+ (UIFont*)cartDeliveryTitleLabelFont;
+ (UIFont*)cartDeliveryLabelFont;

+ (UIColor *)changeDeliveryMethodButtonColor;
+ (UIColor *)changeDeliveryMethodButtonTitleColor;

+ (UIColor *)cartBadgeLabelColor;
+ (UIFont *)cartBadgeLabelFont;

+ (UIColor *)cartPriceLabelBorderColor;

+ (UIColor *)footerShowCodeButtonColor;
+ (UIColor *)footerShowCodeButtonTitleColor;
+ (UIColor *)footerPickUpButtonTitleColor;

+ (UIColor*)inputFieldValueColor;
+ (UIColor*)inputFieldTitleColor;
+ (UIFont*)inputFieldFont;

+ (UIFont*)buttonFont;
+ (UIColor*)buttonColor;
+ (UIColor *)buttonTitleBlackColor;
+ (UIColor*)buttonBackgroundColor;
+ (UIColor *)buttonBackgroundGrayColor;

+ (UIFont *)csvLabelTitleFont;
+ (UIColor *)separatorColor;
+ (UIColor *)paymentButtonTitleColor;
+ (UIFont *)paymentButtonTitleFont;

+ (UIFont *)productDetailsShipToAddressButtonFont;
+ (UIColor *)productDetailsShipToAddressButtonColor;

+ (UIFont *)productDetailsSelectedButtonViewTitleFont;
+ (UIColor *)productDetailsSelectedButtonViewTitleColor;
+ (UIFont *)productDetailsSelectedButtonViewInfoFont;
+ (UIColor *)productDetailsSelectedButtonViewInfoColor;
+ (UIFont *)productDetailsCheckoutButtonFont;
+ (UIColor *)productDetailsCheckoutButtonColor;

+ (UIFont *)signInForgotMyPasswordButtonFont;

+ (UIFont *)emailSentMessageFont;
+ (UIColor *)emailSentMessageColor;

+ (UIFont *)signUp2LabelFont;
+ (UIColor *)signUp2LabelColor;

+ (UIColor *)blurColor;

+ (UIFont *)venueTitleFont;
+ (UIColor *)venueTitleColor;

+ (UIFont *)shopNowSearchFont;
+ (UIColor *)shopNowSearchColor;

+ (UIFont *)settingsButtonLabelFont;
+ (UIColor *)settingsButtonLabelColor;

+ (UIFont *)settingsTitleFont;
+ (UIFont *)settingsTitle2Font;
+ (UIColor *)settingsTitleColor;

+ (UIFont *)orderCodeTitleFont;
+ (UIColor *)orderCodeTitleColor;
+ (UIFont *)orderCodeValueFont;
+ (UIColor *)orderCodeValueColor;
+ (UIFont *)orderCodeInfoFont;
+ (UIColor *)orderCodeInfoColor;

+ (UIColor *)singUpBorderColor;
+ (UIFont *)singUpWelcomeButtonTitleFont;
+ (UIColor *)singUpWelcomeButtonTitleColor;
+ (UIColor *)singUpWelcomeButtonColor;

+ (UIFont *)barButtonItemTitleFont;

+ (UIFont *)emptyCellTitleFont;
+ (UIFont *)emptyCellButtonTitleFont;
+ (UIColor *)emptyCellTitleColor;

+ (void)configureRoundedWhiteButtonWithBorder:(UIButton *)button;
+ (void)configureRoundedWhiteButtonWithBorder:(UIButton *)button borderColor:(UIColor *)borderColor titleColor:(UIColor *)titleColor;

@end

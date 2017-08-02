//
// Created by Denis Korneev on 10/02/15.
// Copyright (c) 2015 BlueBird LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    ShowsViewOrderingMethodByDate,
    ShowsViewOrderingMethodByLocation
} ShowsViewOrderingMethod;

@class User;

@interface Settings : NSObject

+ (Settings *)instance;

+ (User *)currentUser;

+ (NSString *)cartOrderToken;

+ (void)setCartOrderToken:(NSString *)token;

+ (void)setLoginViaFacebook:(BOOL)isFBLogin;

+ (BOOL)isLoginViaFacebook;

+ (void)clearForSignOut;

+ (void)updateEmailInDefaultCredentials:(NSString *)email;

+ (void)setDefaultCredentialsWithEmail:(NSString *)email andPassword:(NSString *)password;

+ (NSURLCredential *)defaultCredential;

+ (void)removeDefaultCredential;

+ (void)deleteCookies;

+ (void)clearCartOrderToken;

+ (ShowsViewOrderingMethod)showsOrderingMethod;

+ (void)setShowsOrderingMethod:(ShowsViewOrderingMethod)orderingMethod;

+ (BOOL)isUsaOrCanada;

+ (void)setRateTheAppDate:(NSDate *)date;

+ (nullable NSDate *)rateTheAppDate;

@end

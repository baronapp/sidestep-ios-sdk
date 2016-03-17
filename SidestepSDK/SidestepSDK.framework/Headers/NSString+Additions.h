//
// Created by Dmitry Korotchenkov on 19/02/15.
// Copyright (c) 2015 Sidestep LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Additions)
- (NSString *)stringByReplaceCharacterSet:(NSCharacterSet *)characterSet withString:(NSString *)string;

- (NSString *)decimailNumbersString;

-(NSNumber *)numberValue;

- (NSString *)numbersString;

- (NSString *)cardNumberString;

- (NSString *)expiryDateString;

- (NSString *)cvcString;

- (NSUInteger)numberOfSubstringOccurrences:(NSString *)substring;

@end
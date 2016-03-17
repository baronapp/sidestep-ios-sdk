//
// Created by Denis Korneev on 04/03/15.
// Copyright (c) 2015 BlueBird LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDateFormatter (Formats)

+ (instancetype)dateFormatter;

+ (instancetype)dateFormatterDefaultStyle;

+ (instancetype)dateFormatterLongStyle;

+ (instancetype)dateFormatterShortStyle;

+ (instancetype)dateTimeFormatter;
@end
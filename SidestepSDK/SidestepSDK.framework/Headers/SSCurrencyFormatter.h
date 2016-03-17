//
//  SSCurrencyFormatter.h
//  Sidestep
//
//  Created by Denis Korneev on 22/09/15.
//  Copyright © 2015 BlueBird LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SSCurrencyFormatter : NSObject
+ (instancetype)sharedInstance;
- (NSString *)stringFromNumber:(NSNumber *)number currencyFormat:(NSString *)currencyFormat;
@end

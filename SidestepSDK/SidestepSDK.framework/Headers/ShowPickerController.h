//
// Created by Denis Korneev on 26/08/15.
// Copyright (c) 2015 BlueBird LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AbstractPickerController.h"

@interface ShowPickerController : AbstractPickerController
- (instancetype __nonnull)initWithArtistIds:(NSArray *__nullable)artistIds availableForProductId:(NSNumber *__nullable)productsId;
@end
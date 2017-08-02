//
// Created by dkorneev on 21/07/14.
// Copyright (c) 2014 BlueBird LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface QrCodeSaver : NSObject
- (void)saveViewsSnapshot:(UIView *)view withCompletion:(void (^)(void))completion;
@end

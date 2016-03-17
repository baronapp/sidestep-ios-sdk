//
// Created by dkorneev on 07/07/14.
// Copyright (c) 2014 BlueBird LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SSCheckoutFlowProtocol.h"
#import "QrCodeSaver.h"
#import <CoreData/CoreData.h>


@interface OrderCompletionController : UIViewController
        <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout,
        SSCheckoutFlowProtocol, CodeSaverDataSource>

+ (instancetype)instantiateFromStoryboard;

+ (NSString *)reuseIdentifier;

@property (copy)void (^next)();
@property (copy)void (^back)();
@end
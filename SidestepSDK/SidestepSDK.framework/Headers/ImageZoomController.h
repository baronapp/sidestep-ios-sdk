//
// File: ImageZoomController.h
// Project: Sidestep
//
// Created by dkorneev on 1/31/14.
// Copyright (c) 2014 BlueBird LLC. All rights reserved.
//


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ImageZoomController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>
@property(nonatomic, strong) NSArray *images;

+ (instancetype)instantiateFromStoryboard;
@end
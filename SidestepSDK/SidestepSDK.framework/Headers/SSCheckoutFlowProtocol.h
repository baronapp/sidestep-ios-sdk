//
// File: SSCheckoutFlowProtocol.h
// Project: Sidestep
//
// Created by dkorneev on 02/07/14.
// Copyright (c) 2014 BlueBird LLC. All rights reserved.
//


#import <Foundation/Foundation.h>

@protocol SSCheckoutFlowProtocol <NSObject>
@required
@property (copy)void (^nextBlock)();
@property (copy)void (^backBlock)();
@end

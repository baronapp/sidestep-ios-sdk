//
//  UIImage+Resizing.h
//  Sidestep
//
//  Created by Denis Korneev on 13/01/16.
//  Copyright © 2016 Sidestep Technologies Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Resizing)
- (UIImage *)resizedImageWithWidth:(CGFloat)newWidth andTiledAreaFrom:(CGFloat)from1 to:(CGFloat)to1 andFrom:(CGFloat)from2 to:(CGFloat)to2;
@end

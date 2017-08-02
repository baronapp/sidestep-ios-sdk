//
//  ProductDescriptionTVCellTableViewCell.h
//  Sidestep
//
//  Created by Denis Korneev on 15/10/15.
//  Copyright © 2015 Sidestep Technologies Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ProductDescriptionTVCell : UITableViewCell <UIWebViewDelegate>
+ (NSString *)reuseIdentifier;
- (CGFloat)contentHeight;
- (void)displayHTML:(NSString *)htmlString;

@property (nonatomic, copy) void (^didFinishRendering)(ProductDescriptionTVCell *cell);

@end

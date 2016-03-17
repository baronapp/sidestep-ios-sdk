//
//  ArtistCVCell.h
//  Sidestep
//
//  Created by Pavel on 20.01.14.
//  Copyright (c) 2014 BlueBird LLC. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Artist;

@interface ArtistCVCell : UICollectionViewCell {
  Artist *_artist;
}

@property(weak, nonatomic) IBOutlet UILabel *titleLabel;
@property(weak, nonatomic) IBOutlet UIImageView *artistImageView;
@property(weak, nonatomic) IBOutlet UILabel *statusLabel;

+ (NSString *)reuseIdentifier;

- (void)customizeWithArtist:(Artist *)artist;

@end
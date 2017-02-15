//
// Created by Denis Korneev on 03/07/15.
// Copyright (c) 2015 BlueBird LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class MenuAnimationWorker;
@class Artist;

@protocol ArtistsControllerDelegate <NSObject>

- (void)artistsControllerDidSelectArtist:(Artist *)artist;
- (void)artistsControllerNeedsOpenCart;
    
@end

@interface ArtistsController : UIViewController
<UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate>

- (instancetype)initWithFiltering:(NSArray *)artists;

@property (nonatomic, weak) id<ArtistsControllerDelegate> delegate;
@end

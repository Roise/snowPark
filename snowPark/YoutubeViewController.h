//
//  YoutubeViewController.h
//  snowMovie
//
//  Created by imac27 on 2016. 8. 16..
//  Copyright © 2016년 roi. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "YTPlayerView.h"

@interface YoutubeViewController : UIViewController<YTPlayerViewDelegate>
- (IBAction)stopVideo:(id)sender;
- (IBAction)playVideo:(id)sender;

@property (weak, nonatomic) IBOutlet YTPlayerView *playerView;

@end

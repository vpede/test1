//
//  MasterViewController.h
//  test1
//
//  Created by Erin Jellick on 2/17/14.
//  Copyright (c) 2014 Velocipede Industries. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end

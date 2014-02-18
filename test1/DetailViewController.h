//
//  DetailViewController.h
//  test1
//
//  Created by Erin Jellick on 2/17/14.
//  Copyright (c) 2014 Velocipede Industries. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

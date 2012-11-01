//
//  DetailViewController.h
//  CustomNavBack
//
//  Created by Jake on 11/1/12.
//  Copyright (c) 2012 Jake. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end

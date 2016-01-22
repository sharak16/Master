//
//  DetailViewController.h
//  Master
//
//  Created by rakesh on 1/22/16.
//  Copyright (c) 2016 mialo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end


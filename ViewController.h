//
//  ViewController.h
//  CrystalBall
//
//  Created by Mike Bolton on 12/6/12.
//  Copyright (c) 2012 Mike Bolton. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

- (IBAction)buttonPressed:(id)sender;

@property (strong, nonatomic) IBOutlet UILabel *predictionLabel;
@property (strong, nonatomic) NSArray *predictionArray;
@property (strong, nonatomic) UIImageView *imageView;

-(void) makePrediction;

@end


//
//  JPViewController.h
//  BullsEye
//
//  Created by Jun Hong Park on 9/4/14.
//  Copyright (c) 2014 John Park. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JPViewController : UIViewController <UIAlertViewDelegate>

@property (nonatomic, weak) IBOutlet UISlider *slider;
@property (nonatomic, weak) IBOutlet UILabel *targetLabel;
@property (nonatomic, weak) IBOutlet UILabel *scoreLabel;
@property (nonatomic, weak) IBOutlet UILabel *roundLabel;

- (IBAction)showAlert;
- (IBAction)sliderMoved:(UISlider *)slider;
- (IBAction)startOver;

@end

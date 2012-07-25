//
//  CricketAppViewController.h
//  CricketApp
//
//  Created by Miranda Aperghis on 25/07/2012.
//  Copyright (c) 2012 Bristol University. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CricketAppViewController : UIViewController
@property (strong, nonatomic) IBOutlet UIScrollView *ScrollerView;
@property (strong, nonatomic) IBOutlet UIToolbar *saveButtonBar;
@property (strong, nonatomic) IBOutlet UINavigationBar *navigationBar;
@property (strong, nonatomic) IBOutlet UIPickerView *gameTypePicker;

@end

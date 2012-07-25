//
//  CricketAppViewController.m
//  CricketApp
//
//  Created by Miranda Aperghis on 25/07/2012.
//  Copyright (c) 2012 Bristol University. All rights reserved.
//

#import "CricketAppViewController.h"

@implementation CricketAppViewController
@synthesize ScrollerView;
@synthesize saveButtonBar;
@synthesize navigationBar;
@synthesize gameTypePicker;

- (IBAction)homeTeamEntered:(id)sender {
    
}

- (IBAction)awayTeamEntered:(id)sender {
    
}

- (IBAction)matchDate:(id)sender {
	
}

- (IBAction)saveAndShareButton:(id)sender {
}

- (IBAction)saveButton:(id)sender {
	
}


- (void)viewDidUnload {
	[self setScrollerView:nil];
	[self setSaveButtonBar:nil];
	[self setNavigationBar:nil];
	[self setGameTypePicker:nil];
	[super viewDidUnload];
}
@end

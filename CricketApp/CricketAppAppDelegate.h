//
//  CricketAppAppDelegate.h
//  CricketApp
//
//  Created by Miranda Aperghis on 25/07/2012.
//  Copyright (c) 2012 Bristol University. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CricketAppAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) UIViewController * viewController;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end

//
//  AppDelegate.h
//  LocationService
//
//  Created by Surbhi on 5/21/14.
//  Copyright (c) 2014 ___SurbhiSinghal___. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UserInterfaceController.h"
#import "GeoCoderMapViewViewController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (strong, nonatomic) UITabBarController *tabBarController;
@property (strong, nonatomic) UserInterfaceController *firstViewController;
@property (strong, nonatomic) GeoCoderMapViewViewController *secondViewController;


- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end

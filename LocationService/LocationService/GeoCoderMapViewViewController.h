//
//  GeoCoderMapViewViewController.h
//  LocationService
//
//  Created by Surbhi on 5/21/14.
//  Copyright (c) 2014 ___SurbhiSinghal___. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>
#import <AddressBook/AddressBook.h>

@interface GeoCoderMapViewViewController : UIViewController
@property CLLocationCoordinate2D coords;
@property (strong, nonatomic) IBOutlet UITextField *address;
@property (strong, nonatomic) IBOutlet UITextField *city;
@property (strong, nonatomic) IBOutlet UITextField *state;
@property (strong, nonatomic) IBOutlet UITextField *zip;
@property (strong, nonatomic) IBOutlet UITextField *country;

- (IBAction)getDirections:(id)sender;

@end

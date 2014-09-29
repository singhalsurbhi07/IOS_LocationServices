//
//  UserInterfaceController.m
//  LocationService
//
//  Created by Surbhi on 5/21/14.
//  Copyright (c) 2014 ___SurbhiSinghal___. All rights reserved.
//

#import "UserInterfaceController.h"

@interface UserInterfaceController ()

@end

@implementation UserInterfaceController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    //self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        
    }
    return self;
}
- (void)mapView:(MKMapView *)mapView didUpdateUserLocation:(MKUserLocation *)userLocation
{
    MKCoordinateRegion region = MKCoordinateRegionMakeWithDistance(userLocation.coordinate, 800, 800);
    [self.mapView setRegion:[self.mapView regionThatFits:region] animated:YES];
}

- (void)viewDidLoad
{
    [super viewDidLoad];
     self.mapView.delegate=self;
    
    
    //self.mapView.showsUserLocation = YES;

    // Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)update:(CLLocation *)location {
    }

- (void)locationError:(NSError *)error {
    
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end

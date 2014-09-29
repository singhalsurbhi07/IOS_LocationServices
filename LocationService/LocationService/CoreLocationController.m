//
//  CoreLocationController.m
//  LocationService
//
//  Created by Surbhi on 5/21/14.
//  Copyright (c) 2014 ___SurbhiSinghal___. All rights reserved.
//

#import "CoreLocationController.h"
#import "CoreLocation/CoreLocation.h"
#import <MapKit/MapKit.h>

@implementation CoreLocationController

- (id)init {
    self = [super init];
	if(self != nil) {
		self.locationManager = [[CLLocationManager alloc] init];
		self.locationManager.delegate = self;
	}
	return self;
}


- (void)locationManager:(CLLocationManager *)manager didFailWithError:(NSError *)error {
    [self.delegate locationError:error];
}

@end
//
//  CoreLocationController.h
//  LocationService
//
//  Created by Surbhi on 5/21/14.
//  Copyright (c) 2014 ___SurbhiSinghal___. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CoreLocation/CoreLocation.h"

@protocol CoreLocationControllerDelegate
@required
- (void)update:(CLLocation *)location;
- (void)locationError:(NSError *)error;
@end

@interface CoreLocationController : NSObject <CLLocationManagerDelegate>

@property (nonatomic, retain) CLLocationManager *locationManager;
@property (nonatomic, retain) id delegate;

@end

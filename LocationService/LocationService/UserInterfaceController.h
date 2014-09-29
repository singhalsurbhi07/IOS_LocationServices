//
//  UserInterfaceController.h
//  LocationService
//
//  Created by Surbhi on 5/21/14.
//  Copyright (c) 2014 ___SurbhiSinghal___. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MapKit/MapKit.h"
#import "CoreLocationController.h"


@interface UserInterfaceController : UIViewController<CoreLocationControllerDelegate>
@property (weak, nonatomic) IBOutlet MKMapView *mapView;
@property (nonatomic, retain) CoreLocationController *locationController;


@end

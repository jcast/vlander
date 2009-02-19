//
//  VLanderAppliance.m
//  VLC
//
//  Created by Jeremie Castagna on 2/1/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import "VLanderAppliance.h"
#import "MainMenuController.h"


@implementation VLanderAppliance
+ (void) initialize {
	Class cls = NSClassFromString( @"BRFeatureManager" );
	if ( cls == Nil )
			return;
	[[cls sharedInstance] enableFeatureNamed: [[NSBundle bundleForClass: self] bundleIdentifier]];
}

+ (NSString *)className {
	return ( @"RUIDVDAppliance" );
}

- (id)applianceController {
	//BRMediaMenuController* controller = [[BRMediaMenuController alloc] init];
	//[controller setListTitle:@"vLander"];
	//return controller;
	return [MainMenuController sharedInstance];
}


- (id)applianceKey {
	return @"1";
}

- (id)applianceName {
	return @"RUIDVDAppliance";
}

- (NSString *)version
{
	return @"2.1.6";
}
@end

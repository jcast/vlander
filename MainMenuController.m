//
//  MainMenuController.m
//  VLander
//
//  Created by Jeremie Castagna on 2/18/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import "MainMenuController.h"
#import <BackRow/RUIPreferences.h>


@implementation MainMenuController

static MainMenuController *sharedInstance_;
+ (MainMenuController*)sharedInstance
{
	if(!sharedInstance_) sharedInstance_ = [[MainMenuController alloc] init];
	return sharedInstance_;
}

- (id) init {
	[super init];
	[self setListTitle:@"vLander"];
	return self;
}

- (void) dealloc {
	//TODO: deallocate dependent objects
	[super dealloc];
}

@end

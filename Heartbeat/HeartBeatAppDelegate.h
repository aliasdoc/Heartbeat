//
//  HeartBeatAppDelegate.h
//  Heartbeat
//
//  Created by michael leybovich on 9/10/13.
//  Copyright (c) 2013 michael leybovich. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FacebookUserManager.h"

@interface HeartBeatAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) FacebookUserManager *userManager;

@end

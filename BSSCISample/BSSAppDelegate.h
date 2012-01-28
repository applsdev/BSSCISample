//
//  BSSAppDelegate.h
//  BSSCISample
//
//  Created by Martin Reichart on 12/25/11.
//  Copyright (c) 2011 Blacksmith Software. All rights reserved.   
//

#import <UIKit/UIKit.h>

@class BSSViewController;

@interface BSSAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) BSSViewController *viewController;

@end

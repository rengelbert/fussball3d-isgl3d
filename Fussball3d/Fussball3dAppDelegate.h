//
//  Fussball3dAppDelegate.h
//  Fussball3d
//
//  Created by Roger Engelbert on 10/29/12.
//  Copyright 2012 DoneWithComputers. All rights reserved.
//

@class Isgl3dViewController;

@interface Fussball3dAppDelegate : NSObject <UIApplicationDelegate> {

@private
	Isgl3dViewController * _viewController;
	UIWindow * _window;
}

@property (nonatomic, retain) UIWindow * window;

@end

//
//  AppDelegate.h
//  Raven
//
//  Created by Luke Switzer on 11/13/18.
//  Copyright © 2018 Root Down Digital. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end


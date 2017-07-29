//
//  AppDelegate.h
//  SwiftPlusObjectiveC
//
//  Created by wazid on 29/07/17.
//  Copyright © 2017 MobileCoderz. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end


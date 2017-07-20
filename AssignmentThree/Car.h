//
//  Car.h
//  AssignmentThree
//
//  Created by Jaison Bhatti on 2017-07-11.
//  Copyright © 2017 Jaison Bhatti. All rights reserved.
//


//x  Create a new Command Line Tool project and pick Objective-C as the language.
//x  Create a Class called Car. Add a NSString property called model.
//x  Create a method called drive. Inside the method put an NSLog statement that prints the model of the car you are driving.
//x  Create a initWithModel: method that requires an NSString *model as an input. Inside the method set _model = model. This will set the class's model to the model you pass in.
//x  Subclass Car and make a Toyota Class. Override init() and set _model to "Prius" inside the method.
//  In main.m, add an instance of a Car called nissan. Initialize it with model named "Rogue".
//  Add the drive() method to make sure it prints out "Rogue"
//  Then, add an instance of Toyota called toyota. Initialize it.
//  Add the drive() method to make sure it prints out "Prius"

#import <Foundation/Foundation.h>

@interface Car : NSObject

@property NSString *model;

- (void) drive;

- (id) initWithModel: (NSString *) model;


@end

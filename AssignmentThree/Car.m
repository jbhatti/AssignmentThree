//
//  Car.m
//  AssignmentThree
//
//  Created by Jaison Bhatti on 2017-07-11.
//  Copyright © 2017 Jaison Bhatti. All rights reserved.
//

#import "Car.h"

@implementation Car


-(void) drive {
    NSLog(@"%@",_model);
    return;
}

- (id)initWithModel: (NSString *) model
{
    _model = model;
    return self;
}


@end

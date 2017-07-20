//
//  main.m
//  AssignmentThree
//
//  Created by Jaison Bhatti on 2017-07-11.
//  Copyright © 2017 Jaison Bhatti. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Car.h"
#import "Toyota.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        
        Car *nissan = [[Car alloc] initWithModel:@"Rogue"];
        [nissan drive];
        Toyota *toyota= [[Toyota alloc]init];
        [toyota drive];
        
    }
    return 0;
}

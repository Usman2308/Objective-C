//
//  main.m
//  Chapter17
//
//  Created by Usman Khan on 13/12/2012.
//  Copyright (c) 2012 Usman Khan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Person.h"
int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        Person *human = [[Person alloc] init];
        
        //give the instance variables some value
        [human setHeightInMeters:1.8];
        [human setWeightInKilos:96];
        
        //call the body mass index method
        float bmi = [human bodyMassIndex];
        NSLog(@"\nThe weight of the human is : %d\nThe height of the human is : %f\nBMI = %f",
              [human weightInKilos], [human heightInMeters], bmi);
    }
    return 0;
}


//
//  Person.h
//  Chapter17
//
//  Created by Usman Khan on 13/12/2012.
//  Copyright (c) 2012 Usman Khan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject
{
    //Person class has two instance variables
    float heightInMeters;
    int weightInKilos;
}
@property float heightInMeters;
@property int weightInKilos;

//This method calculates the body mass index
-(float)bodyMassIndex;
@end

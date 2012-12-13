//
//  Person.m
//  Chapter17
//
//  Created by Usman Khan on 13/12/2012.
//  Copyright (c) 2012 Usman Khan. All rights reserved.
//

#import "Person.h"

@implementation Person

@synthesize heightInMeters, weightInKilos;

-(float)bodyMassIndex{
    float h = [self heightInMeters];
    return [self weightInKilos] / (h * h);
}

@end

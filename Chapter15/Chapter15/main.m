//
//  main.m
//  Chapter15
//
//  Created by Usman Khan on 13/12/2012.
//  Copyright (c) 2012 Usman Khan. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        //create three NSDate objects
        NSDate *now =  [NSDate date];
        NSDate *tomorrow = [now dateByAddingTimeInterval:24.0 * 60.0 * 60.0];
        NSDate *yesterday = [now dateByAddingTimeInterval:-24 * 60.0 * 60.0];
        
        //create an array containing all three dates
        NSArray *dateList = [NSArray arrayWithObjects:now, tomorrow, yesterday, nil];
        
        //how many dates are there?
        NSUInteger numberOfDates = [dateList count];
        NSLog(@"There are %lu dates", numberOfDates);
        
        for(NSDate *d in dateList){
            NSLog(@"Here is a date : %@", d);
        }
        
    }
    return 0;
}


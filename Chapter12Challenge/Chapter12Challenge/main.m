//
//  main.m
//  Chapter12Challenge
//
//  Created by Usman Khan on 12/12/2012.
//  Copyright (c) 2012 Usman Khan. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        //D.O.B
        
        NSDateComponents *comps = [[NSDateComponents alloc] init];
        [comps setYear:1988];
        [comps setMonth:8];
        [comps setDay:23];
        [comps setHour:13];
        [comps setMinute:10];
        [comps setSecond:0];
        
        NSCalendar *g = [[NSCalendar alloc] initWithCalendarIdentifier:NSGregorianCalendar];
        NSDate *dateOfBirth = [g dateFromComponents:comps];
        
        NSLog(@"My date of birth is : %@", dateOfBirth);
        
        //Now date
        NSDate *now = [NSDate date];
        
        //Find the difference
        double difference = [now timeIntervalSinceDate:dateOfBirth];
        NSLog(@"Difference is %f", difference);
        
    }
    return 0;
}


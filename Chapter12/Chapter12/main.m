//
//  main.m
//  Chapter12
//
//  Created by Usman Khan on 12/12/2012.
//  Copyright (c) 2012 Usman Khan. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        NSDate *now = [NSDate date];
        //get the address of the NSDate object
        NSLog(@"The new date lives %p", now);
        //Get the value stored in memory that no points to
        // %@ asks the object to describe itself
        NSLog(@"%@", now);
        
        double seconds = [now timeIntervalSince1970];
        NSLog(@"It has been %f seconds since 1970", seconds);
        
        NSDate *later = [now dateByAddingTimeInterval:100000];
        NSLog(@"In 100,000 seconds it will be %@", later);
    }
    return 0;
}


//
//  main.m
//  Chapter13Challenge
//
//  Created by Usman Khan on 13/12/2012.
//  Copyright (c) 2012 Usman Khan. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        NSTimeZone *timeZone = [NSTimeZone systemTimeZone];
        
        BOOL computerZone = [timeZone isDaylightSavingTime];
        
        if(computerZone){
            NSLog(@"Daylight Savings set");
        }else{
            NSLog(@"Daylight savings is not set");
        }
        
    }
    return 0;
}


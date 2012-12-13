//
//  main.m
//  Chapter14
//
//  Created by Usman Khan on 13/12/2012.
//  Copyright (c) 2012 Usman Khan. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[])
{

    @autoreleasepool {
        
        NSHost *hostName = [NSHost currentHost];
        NSString *computerName = [hostName localizedName];
        
        NSLog(@"The name of the computer is %@", computerName);
        
    }
    return 0;
}


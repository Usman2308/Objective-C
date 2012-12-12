//
//  main.c
//  Chapter8Part2
//
//  Created by Usman Khan on 12/12/2012.
//  Copyright (c) 2012 Usman Khan. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    
    int i = 24;
    int *addressOfI = &i;
    printf("i stores its value at the following : address %p \n", addressOfI);
    printf("The integer stored in addressOfI is : %d \n", *addressOfI);
    
    printf("An int is %zu bytes \n", sizeof(i));
    printf("A pointer is %zu bytes \n", sizeof(addressOfI));
    
    //challenge section
    printf("A float takes up %zu bytes \n", sizeof(float));
    
    return 0;
}


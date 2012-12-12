//
//  main.c
//  Chapter8
//
//  Created by Usman Khan on 12/12/2012.
//  Copyright (c) 2012 Usman Khan. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i = 24;
    int *addressOfI = &i;
    printf("i stores its value at %p \n", addressOfI);
    printf("the main function starts at %p \n", main);
    printf("the value stored at addressOfI is %d \n", *addressOfI);
    return 0;
}


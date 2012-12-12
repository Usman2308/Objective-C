//
//  main.c
//  Chapter6
//
//  Created by Usman Khan on 12/12/2012.
//  Copyright (c) 2012 Usman Khan. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i = 255;
    printf("The value of i is %d.\n", i);
    
    //print x in base 8 (octal)
    printf("The value of i in base 8 (octal) is %o.\n", i);
    
    //print x in base 16 hexadecimal
    printf("The value of i in base 16 (hex) is %x.\n ", i);
    return 0;
}


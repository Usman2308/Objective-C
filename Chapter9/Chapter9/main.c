//
//  main.c
//  Chapter9
//
//  Created by Usman Khan on 12/12/2012.
//  Copyright (c) 2012 Usman Khan. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[])
{
    double pi = 3.14;
    double integerPart;
    double fractionPart;
    
    //Pass the address of the integerPart as argument
    fractionPart = modf(pi, &integerPart);
    
    //find the value stored in integer part
    printf("integerPart = %.0f, fractionPart = %.2f\n", integerPart, fractionPart);
    
    return 0;
}


//
//  main.c
//  Chapter5Challenge
//
//  Created by Usman Khan on 12/12/2012.
//  Copyright (c) 2012 Usman Khan. All rights reserved.
//

#include <stdio.h>

float remainingAngle(a, b){
    float totalGiven = a + b;
    float c = 180 - totalGiven;
    return c;
}

int main(int argc, const char * argv[])
{
    
    float angleA = 30.0;
    float angleB = 60.0;
    float angleC = remainingAngle(angleA, angleB);
    printf("The remaining angle is %.2f \n", angleC);
    return 0;
}


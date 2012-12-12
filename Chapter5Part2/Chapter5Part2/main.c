//
//  main.c
//  Chapter5Part2
//
//  Created by Usman Khan on 11/12/2012.
//  Copyright (c) 2012 Usman Khan. All rights reserved.
//

#include <stdio.h>

//declare a global variable
float lastTemperature;

float fahrenheitFromCelsius(float cel){
    lastTemperature = cel;
    float fahr = cel * 1.8 + 32.0;
    printf("%f Celsius is %f fahrenheit \n", cel, fahr);
    return fahr;
}


int main(int argc, const char * argv[])
{
    float freezeInC = 0;
    float freezeInF = fahrenheitFromCelsius(freezeInC);
    printf("Water freezes at %f degrees fahrenheit \n", freezeInF);
    printf("The last temperature that was converted was %f \n", lastTemperature);
    return 0;
}


//
//  main.c
//  Chapter3
//
//  Created by Usman Khan on 11/12/2012.
//  Copyright (c) 2012 Usman Khan. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    
    //Declare the variable called 'weight' of type float
    float weight;
    //Assign it a value
    weight = 14.2;
    
    //log it to the user
    printf("The turkey weights %f. \n", weight);
    
    //Declare another variable of type float
    float cookingTime;
    
    //Calculate the cooking time and store it in the varibale
    //In this case '*' means multiplied by
    cookingTime = 15.0 + 15.0 * weight;
    
    //log that to the user
    printf("Cook it for %f minutes.\n", cookingTime);
    
    return 0;
}


//
//  main.c
//  Chapter10
//
//  Created by Usman Khan on 12/12/2012.
//  Copyright (c) 2012 Usman Khan. All rights reserved.
//

#include <stdio.h>

//declaration of typedef Person
typedef struct{
    float heightInMeters;
    int weightInKilos;
}Person;


float bodyMassIndex(Person p){
    return p.weightInKilos / (p.weightInKilos * p.heightInMeters);
}


int main(int argc, const char * argv[])
{
    Person usman;
    usman.weightInKilos = 96;
    usman.heightInMeters = 1.8;
    printf("Usman weight %i kilograms \n", usman.weightInKilos);
    printf("Usman height %.2f meters tall \n", usman.heightInMeters);
    float bmi = bodyMassIndex(usman);
    printf("the BMI is %.2f \n", bmi);
    return 0;
}


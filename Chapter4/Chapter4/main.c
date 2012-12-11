//
//  main.c
//  Chapter4
//
//  Created by Usman Khan on 11/12/2012.
//  Copyright (c) 2012 Usman Khan. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{

    float truckWeight = 34563.8;
    
    //is it under the limit
    if(truckWeight < 40000.0){
        printf("It's a light truck. \n");
    }else {
        printf("It's a heavy truck");
    }
    
    if( (truckWeight > 0.0) && (truckWeight < 40000.0) ){
        printf("Truck weight is within legal range. \n");
    }
    
    
    
    return 0;
}


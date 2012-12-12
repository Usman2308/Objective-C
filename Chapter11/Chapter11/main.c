//
//  main.c
//  Chapter11
//
//  Created by Usman Khan on 12/12/2012.
//  Copyright (c) 2012 Usman Khan. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[])
{

    //Declare a pointer
    float *startOfBuffer;
    
    //Ask to use some bytes from the heap
    startOfBuffer = malloc(1000 * sizeof(float));
    
    //....use the buffer here
    
    //free up the memory so that it can be reused
    free(startOfBuffer);
    
    //forget where that memory is
    startOfBuffer = NULL;
    
    return 0;
}


//
//  main.c
//  Chapter5
//
//  Created by Usman Khan on 11/12/2012.
//  Copyright (c) 2012 Usman Khan. All rights reserved.
//

#include <stdio.h>

void congratulateStudent(char *student, char *course, int numDays){
    printf("%s has done as much %s Programming as I could fit in %d days.\n",
           student, course, numDays);
}

void showCookTimeForTurkey(int pounds){
    int minutes = 15 + 15 * pounds;
    printf("Cook for %d minutes. \n", minutes);
}

int main(int argc, const char * argv[])
{
    //congratulateStudent("John Doe", "PHP", 4);
    //congratulateStudent("Smith", "C", 2);
    
    int totalWeight = 10;
    int gibletsWeight = 1;
    int turkeyWeight = totalWeight - gibletsWeight;
    showCookTimeForTurkey(turkeyWeight);
    
    return 0;
}


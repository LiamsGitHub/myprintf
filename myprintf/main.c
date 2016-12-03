//
//  main.c
//  myprintf
//
//  Created by Liam on 11/3/16.
//  Copyright © 2016 Liam. All rights reserved.
// Anything

#include <stdio.h>
#include <string.h>

void myprintf(char * text, int value);
void reverse(char * input);


int main(int argc, const char * argv[]) {
    
    int value =436;
    
    myprintf("Hello",55);
    myprintf("Hello",value);
    
    
    return 0;
}


void myprintf(char* text, int value) {
    
    int negative = 0;
    char strnum [10];
    char digits [] = {'0','1','2','3','4','5','6','7','8','9'};
    char *ptr = &strnum[9];
    *ptr = '\0';
    
    if (value <0) {
        value=-value;
        negative = 1;
    }
    
    if (value == 0) {
        ptr--;
        *ptr='0';
    }

    while (value!=0)
    {
        ptr--;
        *ptr = digits[value % 10];
        value=value/10;
    }
    
    if (negative) {
        ptr--;
        *ptr = '-';
    }
    

    printf("%s %s\n",text,ptr);

}



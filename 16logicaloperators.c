#include <stdio.h>
#include <stdbool.h>

int main() {
    // logical operators = Used to combine or modify boolean expressions.

    // && = AND
    // || = OR
    // ! = NOT

    /*
    int temp = -1;

    if(temp <= 0 || temp >= 30) {
        printf("The temperature is GOOD");
    }
    else {
        printf("The temperature is BAD");
    }
    */

    bool isSunny = true;
    
    if(!isSunny){
        printf("It is CLOUDY outside");
    }
    else {
        printf("It is SUNNY outside");
    }

    return 0;
}
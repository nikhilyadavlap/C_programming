//else-if-Ladder 

#include <stdio.h>

int main() {
    int marks = 85;

    if(marks >= 90)
        printf("A+");
    else if(marks >= 80)
        printf("A");
    else if(marks >= 70)
        printf("B");
    else
        printf("C");
    
    return 0;
}
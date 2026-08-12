//Nested if

#include <stdio.h>

int main() {
    int age = 20;
    int hasID = 1;

    if(age >= 18) {
        if(hasID == 1)
            printf("Entry Allowed");
        else
            printf("ID Required");
    }
    else {
        printf("Underage");
    }

    return 0;
}
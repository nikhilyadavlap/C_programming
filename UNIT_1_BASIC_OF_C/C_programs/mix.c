//Final Mixed Question 

#include <stdio.h>

int main () {
    int id;
    float marks;
    char grade;

    printf("Enter ID: ");
    scanf("%d", &id);

    printf("Enter Marks: ");
    scanf("%f", &marks);

    printf("Enter Grade: ");
    scanf("%c", &grade);

    printf("\n----- Student Details -----\n");
    printf("ID     : %d\n", id);
    printf("Marks  : %.2f\n", marks);
    printf("Grade  : %c\n", grade);

    return 0;
}


/*
Challenge Question (Solve Yourself) 
Question:
Write a C program that:
- Take your Name, Age, and Percentage as input. 
*/

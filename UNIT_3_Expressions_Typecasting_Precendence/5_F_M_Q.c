//Final Mixed Question

#include <stdio.h>

int main() {
    int a , b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int sum = a + b;
    int product = a * b;
    float average = (float)sum / 2;

    int largest = (a > b) ? a : b;

    printf("Sum : %d\n", sum);
    printf("Product : %d\n", product);
    printf("Average : %.2f\n", average);
    printf("Largest : %d", largest);

    return 0;
}
//Logical Operators

#include <stdio.h>

int main() {
    int a = 10, b = 5;

    printf("%d\n", (a > 5 && b < 10));
    printf("%d\n", (a < 5 || b == 5));
    printf("%d", !(a == 10));

    return 0;
}
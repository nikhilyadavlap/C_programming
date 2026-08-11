//Parentheses + Expression

#include <stdio.h>

int main() {
    int a = 10;
    int b = 5;
    int c = 2;

    printf("%d\n", (a + b) * c);
    printf("%d", a + (b * c));

    return 0;
}
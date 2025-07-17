#include <stdio.h>

int main() {
    int a = 60;
    float b = 3.4;
    float result;

    result = a + b;

    printf("Integer: %d", a);
    printf("Float: %.2f", b);
    printf("Sum (int + float): %.2f", result);

    return 0;
}
#include <stdio.h>
#include "method.h"

int main() {
    int num1 = 1;
    int num2 = 2;
    swap<int>(num1, num2);
    printf("num1 is %d, num2 is %d\n", num1, num2);
    return 0;
}

#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main(void) {
    int resultado = add(3, 999);
    printf("soma é = %d\n", resultado);

    return 0;
}
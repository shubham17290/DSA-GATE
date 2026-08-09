#include <stdio.h>

void fun(int (*P)[3]) {
    ++P;
    ++(**P);
}

void main() {
    int a[2][3] = {1, 2, 3, 4, 5, 6};

    fun(a);

    printf("%d %d %d", a[1][0], a[1][1], a[1][2]);
}

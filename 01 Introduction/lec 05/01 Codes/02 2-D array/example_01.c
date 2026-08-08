#include <stdio.h>

int main() {
    int a[2][3] = {10, 20, 30, 40, 50, 60};
    printf("%d\n", a);    // address of whole 2-d Array will be printed
    printf("%d\n", a[0]); // address of the first block of array
    printf("%d\n", a[0][0]);

    return 0;
}

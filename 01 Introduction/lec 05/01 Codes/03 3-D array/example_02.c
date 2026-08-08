#include <stdio.h>
//  3-D array
int main() {
    //  checking the address concept
    int a[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    printf("%u\n", a + 1);
    printf("%u\n", a[0] + 1);
    printf("%u\n", &a + 1);

    return 0;
}

#include <stdio.h>

int main() {
    int a[4] = {20, 30, 40, 50};
    int n = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }

    return 0;
}

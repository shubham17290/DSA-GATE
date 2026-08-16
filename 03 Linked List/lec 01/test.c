#include <stdio.h>

int main() {
    int x, y;

    printf("Enter value: ");
    scanf("%d %d", &x, &y);

    printf("%d\n", x % y);
    return 0;
}

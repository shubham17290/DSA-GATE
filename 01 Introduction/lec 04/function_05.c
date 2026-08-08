#include <stdio.h>
int add(int, int);
int main() {
    int a = 10, b = 20, result;
    result = add(a, b);
    printf("%d\n", result);

    return 0;
}
int add(int x, int y) {
    int sum = x + y;
    return sum;
}

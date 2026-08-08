#include <stdio.h>
double fun();
int main() {
    int a;
    a = fun();
    printf("%d\n", a);

    return 0;
}
double fun() {
    double g = 3.8;
    return g;
}

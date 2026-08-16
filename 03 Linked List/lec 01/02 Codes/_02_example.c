#include <stdio.h>

struct pkj {
    int a;
    struct pkj *ptr;
};
int main() {
    struct pkj s1, s2, s3;
    {
        s1.a = 10;
        s2.a = 20;
        s3.a = 30;
        s1.ptr = &s2;
        s2.ptr = &s3;
        s3.ptr = NULL;
    };
}

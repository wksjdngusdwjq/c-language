#include<stdio.h>
int main() {

    printf("%d %d\n", 3&1, 3|1);
    printf("%d\n", 3^1);
    printf("%d %d\n", 3<<1,3>>1);
    printf("%d\n", ~3);
}
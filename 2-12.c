#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n;
    scanf("%d", &n);
    int num10 = n / 10;
    int r = n % 10;
    int num5 = r / 5;
    int num1 = r % 5;
    printf("NT10=%d\n", num10);
    printf("NT5=%d\n", num5);
    printf("NT1=%d\n", num1);
    return 0;
}
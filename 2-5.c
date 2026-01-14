#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d+%d=%d\n", a, b, a + b);
    printf("%d*%d=%d\n", a, b, a * b);
    printf("%d-%d=%d\n", a, b, a - b);
    int q = a / b;
    int r = a % b;
    // 如果餘數是負的
    if (r < 0) {
        //加上b的絕對值就是正確的餘數
        r += abs(b);
        //商要重算->商=(被除數-新餘數)/除數
        q = (a - r) / b;
    }
    printf("%d/%d=%d...%d\n", a, b, q, r);
    return 0;
}
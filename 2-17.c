#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int hr,money;
    scanf("%d %d", &hr, &money);
    double ans = 60 * money + 60 * money * 1.33;
    ans += (hr-120) * money * 1.66;
    printf("%.1f\n", ans);
    return 0;
}
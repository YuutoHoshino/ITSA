#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int d;
    scanf("%d", &d);
    double speed = 1.0 - (30 * 0.0254);
    double time = d / speed;
    int ans = (int)ceil(time);//ceil無條件進位

    printf("%d\n", ans);
    return 0;
}
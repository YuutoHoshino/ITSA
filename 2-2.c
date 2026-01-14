#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int up, down;
    int base, height;
    double area;
    scanf("%d %d %d", &up, &down, &height);
    base = up + down;
    area = (base * height) / 2.0;
    printf("Trapezoid area:%.1f\n", area);
    return 0;
}
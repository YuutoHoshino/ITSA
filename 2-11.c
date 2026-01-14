#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    double m;
    scanf("%lf", &m);
    double km = m * 1.8 + 32;
    printf("%.1f\n", km);
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int n,m;
    scanf("%d %d", &n, &m);
    double h = m*0.01 * m*0.01;
    double km = n / h;
    printf("%.2f\n", km);
	return 0;
}
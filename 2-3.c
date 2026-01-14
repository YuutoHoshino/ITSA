#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        double s;
        scanf("%lf", &s);
        double area = s * s;
        double r_area = (int)(area * 10 + 0.5) / 10.0;
        printf("%.1f\n", r_area);
    }
    return 0;
}
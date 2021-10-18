#include <stdio.h>
#include <math.h>

int main() {
    double a;
    scanf("%lf", &a);
    a = floor(a * 10 + 0.5);
    printf("%f\n", a/10);
    return 0;
}

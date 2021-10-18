#include <stdio.h>
#include <math.h>

int main() {
    double a;
    scanf("%lf", &a);
    a = a * 10;
    a = a + 0.5;
    a = (int)a;
    a = a/10;
    printf("%f\n", a);
    return 0;
}

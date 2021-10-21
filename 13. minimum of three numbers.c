#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int min;

    if (a <= b && a <= c) {
        min = a;
    } else if (b <= c && b <= a) {
        min = b;
    } else {
        min = c;
    }
    printf("%d\n", min);

    return 0;
}

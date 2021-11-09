#include <stdio.h>

int digit(int n) {
    if (n<10) return 1;
    else if (n<100) return 2;
    else if (n<1000) return 3;
    else return 4;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", digit(n));
    return 0;
}

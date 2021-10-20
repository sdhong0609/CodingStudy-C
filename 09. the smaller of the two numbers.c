#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int smaller;

    if (a>b) smaller = b;
    else smaller = a;

    printf("%d\n", smaller);
    return 0;
}

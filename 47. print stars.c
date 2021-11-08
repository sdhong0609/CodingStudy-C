#include <stdio.h>

void printStar(int n) {
    for (int i=0; i<n; i++) {
        printf("*");
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);

    for (int i=1; i<=n; i++) {
        printStar(i);
    }
    return 0;
}

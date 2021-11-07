#include <stdio.h>

void prntStar(int n) {
    for (int i=0; i<n; i++) {
        printf("*");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i=1; i<=n; i++) {
        prntStar(i);
        printf("\n");
    }
    return 0;
}

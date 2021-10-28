#include <stdio.h>

int main() {
    int n, n2;
    scanf("%d", &n);
    
    int a[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &n2);
        a[i] = n2;
    }
    for (int i=0; i<n; i++) {
        printf("%d ", a[n-i-1]);
    }
    printf("\n");
    
    return 0;
}

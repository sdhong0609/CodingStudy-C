#include <stdio.h>

int main() {
    int a[20];
    int b, n;
    int temp[20];
    
    for (int i=0; i<9; i++) {
        scanf("%d", &b);
        a[i] = b;
    }
    scanf("%d", &n);
    
    for (int i=0; i<n; i++) {
        temp[i] = a[i];
    }
    for (int i=0; i<9; i++) {
        a[i] = a[i+n];
    }
    for (int i=0; i<n; i++) {
        a[9-n+i] = temp[i];
    }
    for (int i=0; i<9; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}

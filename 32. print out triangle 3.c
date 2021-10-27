#include <stdio.h>

int main() {
    int n, i, j, k;
    scanf("%d", &n);
    
    for (i=1; i<=(n/2+1); i++) {
        for (k=i; k<(n/2+1); k++) {
            printf(" ");
        }
        
        for (j=1; j<=i; j++) {
            printf("@");
        }
        printf("\n");
    }
    for (i=1; i<=n/2; i++) {
        for (j=1; j<=i; j++) {
            printf(" ");
        }
        
        for (k=i; k<=n/2; k++) {
            printf("@");
        }
        printf("\n");
    }

    return 0;
}

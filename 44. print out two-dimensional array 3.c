#include <stdio.h>

int main() {
    int n, i, j, k=1, l=2;
    scanf("%d", &n);
    int arr[n][n];
    
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            arr[i][j] = 0;
            if (i==j) {
                arr[i][j] = k;
                k += 2;
            }
            if (i+j == n-1) {
                if (i==j) continue;
                arr[i][j] = l;
                l += 2;
            }
        }
    }
    
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

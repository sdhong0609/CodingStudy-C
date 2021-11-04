#include <stdio.h>

int main() {
    int n, i, j, k=1;
    scanf("%d", &n);
    int arr[n][n];
    
    for (j=0; j<n; j++) {
        for (i=n-1; i>=0; i--) {
            arr[i][j] = k;
            k++;
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

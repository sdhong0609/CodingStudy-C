#include <stdio.h>
int arr[11][11];
int main() {
    int n, i, j, k=1;
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        for (j=i; j>=0; j--) {
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

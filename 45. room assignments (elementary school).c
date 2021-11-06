#include <stdio.h>
#include <math.h>

int arr[2][7];
int main() {
    int n, k, i, j, s, y;
    double sum = 0;
    scanf("%d %d", &n, &k);
    
    for (i=0; i<n; i++) {
        scanf("%d %d", &s, &y);
        arr[s][y]++;
    }
    
    for (i=0; i<=1; i++) {
        for (j=0; j<=6; j++) {
            sum += ceil(arr[i][j]/(double)k);
        }
    }
    
    printf("%d\n", (int)sum);
    return 0;
}

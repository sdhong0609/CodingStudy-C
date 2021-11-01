#include <stdio.h>

int arr[101];
int main() {
    int n, i, m;
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &m);
    for (i=n-1; i>=0; i--) {
        if (arr[i]>m) arr[i+1] = arr[i];
        else break;
    }
    arr[i+1] = m;
    for (i=0; i<=n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}

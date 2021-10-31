#include <stdio.h>

int arr[100];
int main() {
    int n, i, j, tmp;
    scanf("%d", &n);

    for (i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &arr[n]);

    for (i=0; i<n; i++) {
        for (j=0; j<n-i; j++) {
            if (arr[j] > arr[j+1]) {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
    for (i=0; i<n+1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

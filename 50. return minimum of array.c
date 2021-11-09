#include <stdio.h>

int arr[101];
int Min(int tmp[], int size) {
    int min = tmp[0];
    for (int i=0; i<size; i++) {
        if (min > tmp[i]) min = tmp[i];
    }
    return min;
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("%d\n", Min(arr, n));
    return 0;
}

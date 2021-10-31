#include <stdio.h>

int arr[100];
int main() {
    int n;
    scanf("%d", &n);
    
    arr[0] = 1;
    arr[1] = arr[0] + arr[0]; //2
    for (int i=2; i<=n; i++) {
        arr[i] = arr[i-2] + arr[i-1];
    }
    printf("%d\n", arr[n]);
    
    return 0;
}

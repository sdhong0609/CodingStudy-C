#include <stdio.h>

int arr[10];
int main() {
    int i, j, sum=0, tmp=0;
    for (i=0; i<9; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    for (i=0; i<8; i++) {
        for (j=i+1; j<9; j++) {
            tmp = sum - (arr[i]+arr[j]);
            if (tmp == 100) {
                arr[i]=-1;
                arr[j]=-1;
                break;
            }
        }
        if (tmp == 100) break;
    }
    for (i=0; i<9; i++) {
        if (arr[i]>0) printf("%d ", arr[i]);
    }
    
    return 0;
}

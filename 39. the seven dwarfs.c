#include <stdio.h>
#include <stdlib.h>

int arr[9];
int ran[9];
int arr2[9];
int main() {
    int i, j, k, sum;
    for (i=0; i<9; i++) {
        scanf("%d", &arr[i]);
    }
    while (1) {
        sum = 0;
        for (i=0; i<9; i++) {
            ran[i] = rand()%9;
            for (j=0; j<i; j++) {
                if (ran[i] == ran[j]) {
                    i--;
                    break;
                }
            }
        }

        for (k=0; k<7; k++) {
            arr2[k] = arr[ran[k]];
            sum += arr[ran[k]];
        }
        if (sum == 100) break;
    }

    for (i=0; i<7; i++) {
        printf("%d ", arr2[i]);
    }

    return 0;
}

#include <stdio.h>

int main() {
    int min, n;
    scanf("%d", &n);
    min = n;

    for (int i=0; i<6; i++) {
        scanf("%d", &n);
        if (min > n) {
            min = n;
        }
    }
    
    printf("%d\n", min);

    return 0;
}

#include <stdio.h>

int main () {
    int a, b;
    scanf("%d %d", &a, &b);
    
    int max = 0;
    
    for (int i=1; i<=a; i++) {
        if (a%i == 0 && b%i == 0) {
            max = i;
        }
    }
    printf("%d\n", max);
    return 0;
}

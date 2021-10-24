#include <stdio.h>

int main() {
    int a, b, result = 1;
    scanf("%d %d", &a, &b);
    
    for (int i=1; i<=b; i++) {
        result *= a;
    }
    printf("%d\n", result);
    return 0;
}

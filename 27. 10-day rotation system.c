#include <stdio.h>

int main() {
    int day, n, result = 0;
    
    scanf("%d", &day);
    for (int i=0; i<7; i++) {
        scanf("%d", &n);
        if (n%10 == day) result++;
    }
    
    printf("%d\n", result);
    
    return 0;
}

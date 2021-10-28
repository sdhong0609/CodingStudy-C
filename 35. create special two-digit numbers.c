#include <stdio.h>

int main() {
    int i, j, c, total=0;
    scanf("%d", &c);
    
    for (i=1; i<=9; i++) {
        for (j=1; j<i; j++) {
            if (10*i+j > c) break;
            printf("%d%d\n", i, j);
            total++;
        }
    }
    printf("%d\n", total);
    return 0;
}

#include <stdio.h>

int main() {
    int min = 100;
    int n = 0;
    int sumOfOddNumbers = 0;
    
    for (int i=0; i<7; i++) {
        scanf("%d", &n);
        if (n%2!=0) {
            sumOfOddNumbers += n;
            if (min > n) {
                min = n;
            }
        }
    }
    
    printf("%d\n", sumOfOddNumbers);
    printf("%d\n", min);
    return 0;
}

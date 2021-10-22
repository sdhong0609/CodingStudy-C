#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int theNumberOfEven = 0;
    for (int i=1; i<=n; i++) {
        if (i%2 == 0) theNumberOfEven++;
    }
    printf("%d\n", theNumberOfEven);

    return 0;
}

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i=2; i<=n-1; i++) {
        if (n%i == 0) {
            printf("NO\n");
            break;
        } else if (i == n-1) {
            printf("YES\n");
            break;
        }
    }
    
    return 0;
}

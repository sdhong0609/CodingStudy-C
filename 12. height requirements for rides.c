#include <stdio.h>

int main() {
    int height;
    scanf("%d", &height);
    
    if (height >= 120 && height <= 150) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}

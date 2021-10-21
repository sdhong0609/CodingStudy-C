#include <stdio.h>

int main() {
//    int a, b, c;
//    scanf("%d %d %d", &a, &b, &c);
//
//    if (a+b <= c || b+c <= a || c+a <= b) {
//        printf("NO\n");
//    } else {
//        printf("YES\n");
//    }

    int a, b, c, max, total;
    scanf("%d %d %d", &a, &b, &c);
    total = a+b+c;
    
    if (a > b) {
        max = a;
    } else max = b;
    if (c > max) max = c;
    
    if ((total-max) > max) printf("YES\n");
    else printf("NO\n");
    
    return 0;
}

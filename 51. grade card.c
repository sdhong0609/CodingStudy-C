#include <stdio.h>
#include <string.h>

struct Grade {
    int num, math, english, c;
};

int main() {
    struct Grade g[51];
    int n, max=0, result=0;
    scanf("%d", &n);
    
    for (int i=0; i<n; i++) {
        scanf("%d", &g[i].num);
        scanf("%d", &g[i].math);
        scanf("%d", &g[i].english);
        scanf("%d", &g[i].c);
    }
    
    for (int i=0; i<n; i++) {
        if (max < g[i].math) {
            max = g[i].math;
            result = g[i].c;
        }
    }
    printf("%d\n", result);
    return 0;
}

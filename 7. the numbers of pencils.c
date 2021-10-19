#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    
    double result;
    result = n/12.0;
    result = ceil(result);
    
    printf("%d\n", (int)result);
    return 0;
}

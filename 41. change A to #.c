#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int n, i;
    scanf("%s", &str);
    n = strlen(str);

    for (i=0; i<n; i++) {
        if (str[i] == 'A') str[i] = '#';
    }
    printf("%s\n", str);

    return 0;
}

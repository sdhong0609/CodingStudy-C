#include <stdio.h>
#include <string.h>

char arr[20];
int main() {
    int n;
    scanf("%s", &arr);
    n = strlen(arr);

    for (int i=0; i<n; i++) {
        if (arr[i] == 'A') {
            arr[i] = '#';
        }
    }
    printf("%s\n", arr);
    return 0;
}

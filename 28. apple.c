#include <stdio.h>

int main() {
    int school = 0;
    scanf("%d", &school);
    
    int student, apple = 0;
    int result = 0;
    
    for (int i=0; i<school; i++) {
        scanf("%d %d", &student, &apple);
        result += apple % student;
    }
    printf("%d\n", result);
    return 0;
}

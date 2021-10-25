#include <stdio.h>

int main() {
    
    int theNumberOfAnimals;
    int theNumberOfLegs;
    scanf("%d %d", &theNumberOfAnimals, &theNumberOfLegs);
    
    int rabbit, chicken = 0;
    for (rabbit = 1; rabbit < theNumberOfAnimals; rabbit++) {
        chicken = theNumberOfAnimals - rabbit;
        if (rabbit * 4 + chicken * 2 == theNumberOfLegs) {
            break;
        }
    }
    printf("%d %d\n", rabbit, chicken);
    
    return 0;
}

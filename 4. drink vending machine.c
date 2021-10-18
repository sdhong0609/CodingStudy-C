#include <stdio.h>

int main() {
    int paidMoney = 0;
    int price = 0;
    
    scanf("%d", &paidMoney);
    scanf("%d", &price);
    printf("\n");
    
    int theNumberOf500won = (paidMoney - price)/500;
    int theNumberOf100won = ((paidMoney - price)%500)/100;
    
    printf("%d\n", paidMoney - price);
    printf("%d\n", theNumberOf500won);
    printf("%d\n", theNumberOf100won);
}

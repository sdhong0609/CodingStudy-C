#include <stdio.h>

int main() {
//     Q1
//    int a, b;
//    a = 3; // 011
//    b = 6; // 110
//    printf("%d %d\n", a&b, a|b); // 010, 111
//    return 0;
//
//     Q2
//    int a=6, b=6, c=7;
//    printf("%d ", a<<1);
//    printf("%d ", b<<2);
//    printf("%d ", b>>1);
//    printf("%d\n", c>>1);
//    return 0;
//
//     Q3
//    int a=20, b=10;
//    a=a+b; //a=30 --- 11110
//    b=a-b; //b=20 --- 10100
//    printf("%d\n", a^b); // 01010 --- 10
//    return 0;
//
//     Q4
//    int a=30, b=10;
//    a=a-b; //a=20 --- 10100
//    b=a+b; //b=30 --- 11110
//    printf("%d %d %d\n", a^b, a&b, a|b); // 10, 20, 30
//    return 0;
    
    // Q5
    int a=3, b=5, c=2, r;
    r= a>b ? b : a; //r=3
    r= r>c ? c : r; //r=2
    printf("%d\n", r<<2); // 8
    return 0;
}

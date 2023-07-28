/*
CH-230-A
a1 p4.[c or cpp or h]
Minjinsor Munkh-Erdene
mmunkherde@jacobs-university.de
*/

#include<stdio.h>

int main() {

    int x = 17;
    int y = 4;
    printf("x=%d\n", x);
    printf("y=%d\n", y);
    int sum = x + y;
    printf("sum=%d\n", sum);
    int product = x * y;
    printf("product=%d\n", product);
    int difference = x - y;
    printf("difference=%d\n", difference);
    float division = (float) x / y;
    printf("division=%f\n", division);
    int remainder = x % y;
    printf("remainder of division=%d\n", remainder);

    return 0;


}
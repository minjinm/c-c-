/*
CH-230-A
a2 p1.[c or cpp or h]
Minjinsor Munkh-Erdene
mmunkherde@jacobs-university.de
*/

#include<stdio.h>

int main(){

    double x, y;
    
    scanf("%lf\n%lf", &x, &y);
    printf("sum of doubles=%lf\n" , x + y);
    printf("difference of doubles=%lf\n", x - y);
    printf("square=%lf\n", x * x);
    int a, b;
    scanf("%d\n%d", &a, &b);
    getchar();
    printf("sum of integers=%d\n", a + b);
    printf("product of integers=%d\n", a * b);
    char c1, c2;
    scanf("%c\n%c", &c1, &c2);
    printf("sum of chars=%d\n", c1 + c2);
    printf("product of chars=%d\n", c1 * c2);
    printf("sum of chars=%c\n", c1 + c2);
    printf("product of chars=%c\n", c1 * c2);




    return 0;
}
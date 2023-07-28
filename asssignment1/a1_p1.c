/*
CH-230-A
a1 p1.[c or cpp or h]
Minjinsor Munkh-Erdene
mmunkherde@jacobs-university.de
*/

#include<stdio.h>

int main() {

    double result; /* The result of our calculation */
    result = (3 + 1) / 5;
    printf("The value of 4/5 is %lf\n", result);

    return 0;

    /* Because (1 + 3) / 5 is calculated as integers, result will be 0
to fix it, you need to type cast it to double before the divide operation (double)(1 + 3) / 5 */


}
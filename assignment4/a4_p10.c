/* 
 CH-230-A
 a4_p10.c
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include<stdio.h>
#include<math.h>
//function that computes and returns by reference
void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *inv)
{

        *prod = a * b;
        *div = a / b;
        *pwr = pow(a, b);
        *inv = 1/b;
}

int main(){

    float a, b, prod, div, pwr, inv;
    //input float values
    scanf("%f %f", &a, &b);
    //call function
    proddivpowinv(a, b, &prod, &div, &pwr, &inv);
    //display results
    printf("%f %f %f %f", prod, div, pwr, inv);
    
    return 0;
}
#include<stdio.h>
//return the product of the two float values
float product(float a, float b){

    return a*b;

}
// return the product of the two float values by reference
void productbyref(float a, float b, float *p){

    return *p = a*b;

}
/*add 3 to the first float and 11 to the second float and return the change
by reference */
void modifybyref(float *a, float *b){

    *a = *a + 3;
    *b = *b +11;
}

int main(){

   float a,b;
   scanf("%f\n%f", &a, &b);

   printf("product: %.6f\n", product(a,b));
   
   float p;
   productbyref(a, b, &p);
   printf("%.6f\n", p);

   modifybyref(&a, &b);
   printf("%f\n%f", a, b);

    return 0;
}
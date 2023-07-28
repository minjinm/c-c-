#include<stdio.h>

float to_pounds(int kg, int g){

    float weight = g/1000.0 + kg;
    float pounds = weight * 2.2;
    return pounds;
}

int main(){

    int kg, g;
    scanf("%d\n%d", &kg, &g);

    printf("Result of conversion: %.6f\n", to_pounds(kg, g));

    return 0;
}
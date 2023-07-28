/*
CH-230-A
a3_p3.c
Minjinsor Munkh-Erdene
mmunkherde@jacobs-university.de
*/

#include<stdio.h>

float convert (int cm) {

    float km = cm / 100000.0;
    return km;
    
}

int main(){
    
    int cm;
    scanf("%d", &cm);
    printf("Result of conversation:%.6f", convert(cm));

    return 0;
}
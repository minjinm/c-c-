/*
CH-230-A
a3_p2.c
Minjinsor Munkh-Erdene
mmunkherde@jacobs-university.de
*/

#include<stdio.h>

int main(){

    char ch;
    int n;

    scanf("%c\n%d", &ch, &n);

    int a; 
    for(a=1; a<=n; a++){
        printf("%c-%d,\n", ch, a);
    }
    return 0;
}


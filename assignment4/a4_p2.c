/*
CH-230-A
a4_p2.c
Minjinsor Munkh-Erdene
mmunkherde@jacobs-university.de
*/

#include<stdio.h>
#include<string.h>

int main(){

    char str[50];
    int i;

    //input string
    fgets(str, sizeof(str), stdin);

    for(i=0; i < strlen(str)-1; i++){
    //when position is even, print w/o space beforehand
        if(i % 2 == 0){
        printf("%c\n", str[i]);
    }//when position isn't even, print w/ spacec beforehand
    else{
        printf(" %c\n", str[i]);
    }
    }
return 0;
}
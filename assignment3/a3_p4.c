/*
CH-230-A
a3_p1.c
Minjinsor Munkh-Erdene
mmunkherde@jacobs-university.de
*/

#include<stdio.h>

int position(char str[], char c)
{
    int idx;
    for (idx=0; str[idx] != c && str[idx] != '\0'; ++idx);
    {

    }
    return idx;
}

int main(){
    char line [80];
    while (1){
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("The first oocurence of 'g' is: %d\n", position(line, 'g'));
    }

    return 0;
}
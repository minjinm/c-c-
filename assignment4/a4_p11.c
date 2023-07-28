/* 
 CH-230-A
 a4_p11.c
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

int count_insensitive(char *str, char c){
//function to find occurances of char c in insensitive manner
    int number = 0;
    for(int i=0; i<strlen(str); i++){
        if(str[i] == tolower(c) || str[i] == toupper(c))
        {
            number = number + 1;
        }
    }

    return number;
}

int main(){

    char *str, c;
    //allocate string
    str = (char*)  malloc(sizeof(char) * 50);
    if (str == NULL){
            exit (1);
    }
    //read string from keyboard
    fgets(str, sizeof(char)*50, stdin);
    //allocate memory for another string
    int length = strlen(str);
    char *str1;
    str1=(char*)malloc(sizeof(char)*length);
    if(str1 == NULL){
        exit(1);
    }
    //copy original string to another
    strcpy(str1, str);
    c = 'b';
    printf("The character '%c' occurs %d times\n",
                    c, count_insensitive(str, c));
    c = 'H';
    printf("The character '%c' occurs %d times\n",
                    c, count_insensitive(str, c));
    c = '8';
    printf("The character '%c' occurs %d times\n",
                    c, count_insensitive(str, c));
    c = 'u';
    printf("The character '%c' occurs %d times\n",
                    c, count_insensitive(str, c));
    c = '$';
    printf("The character '%c' occurs %d times\n",
                    c, count_insensitive(str, c));
    //deallocate memory occupied by 1st string
    free(str);

    return 0;
}

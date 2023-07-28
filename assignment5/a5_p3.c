/* 
 CH-230-A
 a5_p3.c
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include<stdio.h>
#include<string.h>
//function that counts the number of lowercase
int count_lower(char* str){

    int number_of_lower = 0;
    //locate when there's lower case
    for(int i=0; i<(strlen(str)-1); i++){
        int numberOfLower = 0;
          //when string has elements of str_low
        
        if(*(str + i) >='a' && *(str + i) <= 'z'){
            numberOfLower = 1;
        }
    
        //add number to the number of lower case counted
        if(numberOfLower == 1){
            number_of_lower++;
        }
    }
    return number_of_lower;
}

int main(){

    char str[100];
    //input string
    fgets(str, sizeof(str), stdin);
    //read string repeatedly until it's empty
    while (str[0] != '\n'){

        printf("Number of lower case: %d\n", count_lower(str));
        fgets(str, sizeof(str), stdin);
    }
    return 0;
}
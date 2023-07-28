/* 
 CH-230-A
 a7_p4.c
 Minjinsor junkh-Erdene
 Munkherde@jacobs-university.de
*/

#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<stdio.h>
//uppercase
void upper_case(char *str){
    *str=toupper(*str);
}
//lowercase
void lower_case(char *str){
    *str=tolower(*str);
}
void print(char j[], void (*formatter)(char *)){
    char k[50];
    for(int i=0; i<50; i++){
        k[i]=j[i];
        formatter(&k[i]);
    }
    printf("%s", k);
}
//change the up and low cases
void change(char *str){
    if(isupper(*str)){
        *str=tolower(*str);
    }
    else{
        *str=toupper(*str);
    }
}
//quit the execution
void quit(char *str){
    exit(1);
}

int main(){
    
    char input[50], ch;
    //read string
    fgets(input, sizeof(input), stdin);
    //function pointer array
    void (*function[4]) (char*input) = {upper_case, lower_case, change, quit};

    while(1){
        scanf("%c", &ch);
        getchar();
        //ascii 49 is 1
        print(input, function[ch-49]);
    }

    return 0;
}
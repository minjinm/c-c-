/* 
 CH-230-A
 a5_p10.c
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include<stdio.h>
//recursive function to print down
void countingdown(unsigned int n){
    //return exit from recursion
    if(n==0){
        return;
    }
    else{
        printf("%d\n", n);
        countingdown(n-1);
    }
}

int main(){
//read integer from keyboard
    int n;
    scanf("%d", &n);
//call function
    countingdown(n);

    return 0;
}
/* 
 CH-230-A
 a6_p5.c
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include<stdio.h>

int main(){
    //read unsigned char ch
    unsigned char ch;
    scanf("%c", &ch);
    //display the decimal value using typecast
    printf("The decimal representation is: %d\n", (int) ch);
    printf("The backwards binary representation is: ");
    //condition to stop until 1 reaches the leftmost part
    for(int i=0; i<8 && 1<<i<=ch; i++){
        if((1<<i & ch)==0){
            printf("0");
        }
        else
        {
            printf("1");
        }
    }
    printf("\n");
    return 0;
}
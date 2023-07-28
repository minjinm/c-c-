/* 
 CH-230-A
 a5_p11.c
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include<stdio.h>
//recursive function to determine if the number is prime
int determine_if_prime(int x, int i){

    if(x == i){
        return 0;
    }
    if(x%i == 0 || x == 1){
        return 1;
    }

    return determine_if_prime(x, i+1);
}

int main(){

    int x, res = 0;
    //read positive integer
    scanf("%d", &x);
    //display on screen if the given number is prime or not
    res = determine_if_prime(x, 2);
    if(res==0){
        //print if number is prime
        printf("%d is prime\n", x);
    }
    else{
        //print if number is not prime
        printf("%d is not prime\n", x);
    }

    return 0;
}
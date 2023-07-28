/* 
 CH-230-A
 a5_p1.c
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include<stdio.h>

void triangle_char(int n, char ch){
    //function to create triangle of ch
    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<n-i; j++){
            printf("%c", ch);
        }
     printf("\n");
    }
}
/* void triangle_char(int n, char ch){
    //function to create triangle of ch
    int i, j;
    for(i=n; i>0; i--){
        for(j=n; j<n-i; j++){
            printf("%c", ch);
        }
     printf("\n");
    }
} */


int main(){
    //declare integer n and char c
    int n;
    char ch;
    //input integer and char
    scanf("%d", &n);
    getchar();
    scanf("%c", &ch);
    //call function
    triangle_char(n, ch);
    return 0;
}
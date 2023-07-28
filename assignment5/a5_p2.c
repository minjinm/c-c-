/* 
 CH-230-A
 a5_p2.c
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include<stdio.h>
//function that divides by 5 all elements of array
void divby5(float arr[], int size) {

    const float a = 5;
    for(int i=0; i<size; i++){

        arr[i] = arr[i] / a;

   }
    
}

int main(){

    //define array
    float arr[20];
    arr[0] = 5.500;
    arr[1] = 6.500;
    arr[2] = 7.750;
    arr[3] = 8.000;
    arr[4] = 9.600;
    arr[5] = 10.360;
    //print elements of array before
    printf("Before:\n");
    for(int i=0; i<=5; i++){
        printf("%.3f ", arr[i]);
    }
    //call function
    divby5(arr, 6);
    //print elements of array after
    printf("\nAfter:\n");
    for(int i=0; i<=5; i++){
        printf("%.3f ", arr[i]);
    }
    printf("\n");

    return 0;
}
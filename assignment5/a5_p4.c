/* 
 CH-230-A
 a5_p4.c
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>

void divby5(float* arr, int size) {
//function that divides by 5 all elements of array
    const float a = 5;
    for(int i=0; i<size; i++){

        *(arr + i) = *(arr + i) / a;

   }
    
}

int main(){

    int n;
    scanf("%d", &n);
    float *dyn_array;

    //dynamically allocate memory
    dyn_array = (float*)malloc(sizeof(float)* n);
    if(dyn_array == NULL)
        exit(1);
    for(int i=0; i<n; i++){
        scanf("%f", &dyn_array[i]);
    }
    

    printf("Before:\n");
    for(int i=0; i<n; i++){
        printf("%f ", dyn_array[i]);
    }
    divby5(dyn_array, n);
    printf("\nAfter:\n");
    for(int i=0; i<n; i++){
        printf("%f ", dyn_array[i]);
    }

    free(dyn_array);

    return 0;
}
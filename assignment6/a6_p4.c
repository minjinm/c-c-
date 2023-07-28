/* 
 CH-230-A
 a6_p4.c
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include<stdio.h>
#define INTERMEDIATE
int main(){

    //read the dimension of the vector
    int n;
    scanf("%d", &n);
    int i,j;
    //read components of two integer vectors
    int v[100];
    for(i=0; i<n; i++){
        scanf("%d", &v[i]);
    }

    int u[100];
    for(j=0; j<n; j++){
        scanf("%d", &u[j]);
    }

    int product=0;
    for(i=0; i<n; i++){
            product = product + v[i]*u[i];
    }
    
    /* display the value of the intermediate results
    and scalar product if INTER is defined */

    #if defined(INTERMEDIATE)

    printf("The intermediate product values are:\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
        printf("%d\n", v[i]*u[j]);
    }
    
    printf("The scalar product is: %d\n", product);

    //display only the scalar product if INTER is not defined
    #else 
    printf("The scalar product is: %d\n", product);
    #endif
    return 0;
}
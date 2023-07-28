/* 
 CH-230-A
 a4_p3.c
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include<stdio.h>
#include<math.h>

float geometric_mean(float arr[], int num){
//function to find geometric mean using pow function
    float gmean = 1.0;
    for(int i=0; i<num; i++){
        gmean = gmean * arr[i];
    }
    gmean = pow(gmean, 1.0/num);

    return gmean;
    }

float highest_value(float arr[], int num){
            
   // Initialize maximum element
    float maxvalue = arr[0];
    // Compare every element w/ current max
    for(int i=0; i<num; i++){
        if (arr[i]>maxvalue){
            maxvalue = arr[i];
        }
    }

    return maxvalue;
}

float lowest_value(float arr[], int num){
   /*  Initialize minimum element
    and compare every element w/ current min */
    for(int i=0; i<num; i++){
        if(arr[0]>arr[1]){
            arr[0]=arr[1];
        }
    }
    float minvalue = arr[0];

    return minvalue;
}

float all_elements(float arr[], int num){
    //initialize sum to 0 and add every element
    float sum = 0;
    for(int i=0; i<num; i++){
        sum = sum + arr[i];
    }
    return sum;
}
int main(){

    float arr[15];
    int n = 0;

    scanf("%f", &arr[n]);

    //read until negative number
    while(arr[n]>=0){
        n++;
        scanf("%f", &arr[n]);
    }
    //input character
    char c;
    scanf("%c", &c);
    scanf("%c", &c);
    
    switch (c){

        case 'm':
            printf("Geometric mean: %f", geometric_mean(arr, n));
            break;
        //determines and prints the highest number in the array
        case 'h':
            printf("Highest value: %f", highest_value(arr, n));
            break;
        //determines and prints the smallest number in the array
        case 'l':
            printf("Minimum value: %f", lowest_value(arr, n));
            break;
        // determines and prints the sum of all elements in the array
        case 's':
            printf("Prints all elements: %f ", all_elements(arr, n));
            break;
    }
    return 0;
}
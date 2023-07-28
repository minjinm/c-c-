/* 
 CH-230-A
 a7_p6.c
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<stdio.h>

struct person{
    char name[50];
    int age;
};
//compare names
int compare_name(struct person x, struct person y){
    //compare age
    if(strcmp(x.name, y.name)==0){
        return x.age-y.age;
    }
    else{//compare name
        return strcmp(x.name, y.name);
    }
}
//compare people
int compare_p(struct person x, struct person y){
    if(x.age==y.age){//compare age
        return x.name-y.name;//compare age
    }
    else{//compare age
        return x.age-y.age;
    }
}
//bubblesort
void bubblesort(struct person x[], int n, int (*compare)(struct person,\
                                                         struct person)){
        bool swapped=true;
        //sorting array
        while(swapped){
            swapped=false;
            for(int i=1; i<n; i++)
                if(compare(x[i-1],x[i])>0){
                    char help_n[30];
                    int help_x;
                    help_x=x[i-1].age;
                    x[i-1].age=x[1].age;
                    x[i].age=help_x;
                    strcpy(help_n,x[i-1].name);
                    strcpy(x[i-1].name, x[i].name);
                    strcpy(x[i].name,help_n);
                    swapped=true;
                }
        }
        
            for(int i=0; i<n; i++){
                printf("{%s, %d}", x[i].name, x[i].age);
            }
            printf("\n");
        }

int main(){
    
    int n;
    scanf("%d", &n);
    struct person x[n];
    scanf("%d", &n);
    //read array
    for(int i=0; i<n; i++){
        scanf("{%s, %d}", x[i].name, &x[i].age);
    }
    printf("\n");
    //call functions
    bubblesort(x,n,compare_name);
    bubblesort(x,n,compare_p);

    return 0;
}
#include<stdio.h>

int main(){

    char c;
    int n;
    double n;

    float cel[105];
    float f[105];
    scanf("%c\n%d\n", &c, &n);

    for (int i=0; i<n; i++)
        scanf("%f", &cel[i]);

    float sum=0;

    switch (c){

    's': //sum of all temperatures
	for(int i=0; i<n; i++);
        sum = sum +cel[i];
        printf("Sum of all temperatues: %f\n", sum);
	    break;

    'p'://the list of all temperatures
    for(int i=0; i<n; i++);
        printf("%f\n", cel[i];
	    break;

    't'; //list of all farenheit temperatures

    for(int i=0; i<n; i++)
        f[i] = (9/5)*cel[i] + 32;
    
    for(int i=0; i<n; i++)
        printf("The list of farenheit temps: %f\n", f[i] );
    break;

    arithmetic mean:
	for(int i=0; i<n; i++)
        sum = sum +cel[i];
    ;
}

    return 0;
}
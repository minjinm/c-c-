/* 
 CH-230-A
 a7_p5.c
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<stdio.h>

/* int ascend(const void *va , const void *vb)
{
    const int* va = (const int *) va;
    const int* vb = (const int *) vb;
    if (va < vb)
      return -1;
    else if
    (va > vb) return 1;
    else
    return 0;
}

int descend(const void *va, const void *vb)
{
    const int* va = (const int *) va;
    const int* vb = (const int *) vb;
    if (va > vb)
        return -1;
    else
    if (va < vb)
        return 1;
    else
        return 0;
} */

int ascend(const void *va , const void *vb)
{
    return(*(int*)va - *(int*)vb);
}

int descend(const void *va, const void *vb)
{
    return(*(int*)vb - *(int*)va);
}

int main()
{
    char ch;
    int n, *p;
    //read n
    scanf("%d",&n);
    //allocate memory
    p = (int*) malloc(n* sizeof(int));
    if (p == NULL)
    {
        printf("error");
        exit(0);
    }

    for(int i=0; i<n; ++i)
    {
        scanf("%d", &p[i]);
        //getchar();
    }
    beginning:
        scanf("%s", &ch);
    //array with n integers
/*
    qsort(*p, n, sizeof(int), ascend);

    for(int j = 0 ; j < n; j++)
    {
        printf("%d ", p[n]);
    }
*/
   /* while(1){
    scanf("%c", &ch); */
//read which case
    switch (ch){
    case 'a':
    qsort(p,n,sizeof(int), ascend);
    for(int i=0; i<n; i++){
        printf("%d ", p[i]);
    }
    printf("\n");
    break;
    case 'd':
    qsort(p,n,sizeof(int), descend);
    for(int i=0; i<n; i++){
        printf("%d ", p[i]);
    }
    printf("\n");
    break;
    }
    while(ch != 'e'){
        goto beginning;
    }
    free(p);
    return 0;
}
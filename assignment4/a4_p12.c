/* 
 CH-230-A
 a4_p12.c
 Minjinsor Munkh-Erdene
 mmunkherde@jacobs-university.de
*/

#include<stdio.h>
#include<string.h>

void replaceAll(char *str, char c, char e){
//replace character c by e function
    for(int i=0; i<strlen(str); i++){
        if(str[i] == c){
            str[i] = e;
        }
    }

}

int main(){
    
    char str[80], c, e;
    
    while(1)
    {
        //input string
        fgets(str, 80, stdin);
        //read string until 'stop' is entered 
        if(str[0]=='s'&&str[1]=='t'&&str[2]=='o'&&str[3]=='p'&&str[4]=='\n')
        {
            break;
        }
        //input character to be replaced
        scanf("%c", &c);
        getchar();
        //input character to replace
        scanf("%c", &e);
        getchar();
        //print characters to be replaced and replace
        printf("%c %c\n", c, e);
        //print string
        printf("%s", str);
        replaceAll(str, c, e);
        printf("%s", str);
    }
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//gets puts
/*
C
Language
Welcome To C!!*/
#define MAX_LIMIT 20
int main()
{
    char ch,s[20],sen[MAX_LIMIT];
    scanf("%c %s",&ch,&s);
    //gets(sen);//space
    printf("%c\n%s\n ",ch,s);
   fgets(sen, MAX_LIMIT, stdin);
   printf("%s", sen);
return 0;
}

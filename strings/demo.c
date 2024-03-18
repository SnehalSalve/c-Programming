//strings
//string functions

#include<stdio.h>
#include<String.h>
int main(){

char str[]="Sayali";
printf("%s",str);

char str2[10];
printf("\nEnter a string :");
scanf("%s",str2);
printf("your string - %s",str2);

int new=strlen(str);
printf("\n%d",new);
    return 0;
}
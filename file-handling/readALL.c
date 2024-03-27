#include<stdio.h>
int main(){

    FILE *ptr;

    //open a file in read mode
    ptr = fopen("append.txt","r");

    // char data[100];

    // //to read all data
    // while(fgets(data,100,ptr)){
    //     //print a data on terminal
    //     printf("%s",data);
    // }


//lets try another way to read a file in different mode
    char ch;
    do{
        ch=fgetc(ptr);
        printf("%c",ch);

    }while(ch!=EOF);


    //close a file
    fclose(ptr);
    return 0;
}
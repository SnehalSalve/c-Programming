#include<stdio.h>
int main(){

    FILE *ptr;

    //open a file in read mode
    ptr = fopen("append.txt","r");

    char data[100];

    //to read all data
    while(fgets(data,100,ptr)){
        //print a data on terminal
        printf("%s",data);
    }

    //close a file
    fclose(ptr);
    return 0;
}
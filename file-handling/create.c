#include<stdio.h>
int main(){

    FILE *ptr;
    ptr = fopen("create.txt","w");  //fopen(filename,mode-w/r/a) w- write a- append r-read

    //to write a conetct in a file use fprintf()
    fprintf(ptr,"This is new line in create.txt file");

    //to append a content in  a file use 'a'
    ptr = fopen("append.txt","a");

    fprintf(ptr,"\n 12345 \n hello this is new line of append.txt");
    fclose(ptr);
    return 0;
}
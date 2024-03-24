#include<stdio.h>
int main(){

    FILE *pt;
    pt = fopen("append.txt","r");
    
    char mystring[100];
    fgets(mystring,100,pt); // fgets function only reads the first line of the file.

    //print file data
    printf("%s",mystring);

    //close file
    fclose(pt);

    return 0;
}
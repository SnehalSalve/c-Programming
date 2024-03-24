#include<stdio.h>
int main(){

    FILE *ptr;

    ptr = fopen("demo.txt","r");
    char data[100];
//this is one type 
    // if(ptr == NULL){
    //     printf("\n file dose not exits");
    // }
    // else{
    //     while(fgets(data,100,ptr)){
    //         printf("%s",data);
    //     }
    // }

//this is second type 

    if(ptr!=NULL){
        while(fgets(data,100,ptr)){
            printf("%s",data);
        }
    }else{
        printf("\nFile dose not exits");
    }
    fclose(ptr);
    return 0;
}
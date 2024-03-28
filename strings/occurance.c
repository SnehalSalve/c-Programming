#include<stdio.h>
#include<string.h>

//this is static implemetation

// int occurance(char *str,char character){
//     int length =strlen(str);

//     printf("\nlength of string is %d",length);

//     for(int i=0;i<length;i++){
//         if(str[i]==character){
//             return i;
//         }
//     }
//     return -1;
// }

// int main(){

//     char string[] = "Hey I am Emma";
//     char find ='e';

//     int answer = occurance(string,find);
//     if(answer==-1){
//         printf("\nNOt found");
//     }else{
//         printf("\nfound it");
//     }

// return 0;
// }


//this is dynamic user defined method

int occurance(char *string,char search){
    int length =strlen(string);

    printf("\nlength of string is %d",length);

    for(int i=0;i<length;i++){
        if(string[i]==search){
            return i;
        }
    }
    return -1;
}

int main(){

    char string[20];
    char search;

    printf("\nEnter a string :");
    scanf("%c",&string);

    printf("\nEnter a character to check its avaliable in the string or not :");
    scanf("%c",&search);

    int answer = occurance(string,search);
    if(answer==-1){
        printf("\nNOt found");
    }else{
        printf("\nfound it");
    }
  return 0;
}  
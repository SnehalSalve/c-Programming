#include<Stdio.h>
#include<string.h>
#include<ctype.h> //it provide a declaration of isupper/islower

int lowerCase(char *str){
    int cnt= 0;
    int length = strlen(str);
    printf("\nTotal length of string is %d",length);

    for(int i=0;i<length;i++){
        if(islower(str[i])){
            printf("\n%c is %d th lowercase character",str[i],i);
            cnt++;
        }
    }
    return cnt;
}

int main(){
    char str[]="Hello Pune";
    int total;
    //create a function of uppercase
    //call here
    total=lowerCase(str);
    printf("\nTotal lowercase characters are %d",total);
    return 0;
}
#include<Stdio.h>
#include<string.h>
#include<ctype.h> //it provide a declaration of isupper/islower

int upperCase(char *str){
    int cnt= 0;
    int length = strlen(str);
    printf("\nTotal length of string is %d",length);

    for(int i=0;i<length;i++){
        if(isupper(str[i])){
            printf("\n%c is %d th uppercase character",str[i],i);
            cnt++;
        }
    }
    return cnt;
}

int main(){
    char str[]="Hello, My Name is Snehal, I am from Pune.";
    int total,n;
    //create a function of uppercase
    //call here
    total=upperCase(str);
    printf("\nTotal uppercase characters are %d",total);
    return 0;
}
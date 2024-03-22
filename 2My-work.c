#include<stdio.h>
void Tocheck(char ch){
        if(ch=='a' ||ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U'){
            printf("\nGiven Char - %c is vowel ",ch);
        }else{
            printf("\nGiven Char - %c is consonant ",ch);
        }

}
int main(){

    char user;

    printf("\nEnter a character to check its vowels or not :");
    scanf("%c",&user);

    Tocheck(user);

    return 0;
}
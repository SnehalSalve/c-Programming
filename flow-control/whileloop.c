#include<stdio.h>
int main(){

    int a;
    printf("\n Enter a number :");
    scanf("%d",&a);
    while(a>=0){
        if(a==1){
            printf("\n inside if ");
            break;
        }
        printf("\n outside if");
        a++;
    }

    do{
        printf("\n inside do-loop");
        a++;
    }while(a!=2);
    return 0;
}
#include<stdio.h>
int main(){

    int choice;
    int a,b,sum,mul,sub,div;

    printf("\n1.Addition \n2.Subtraction \n3.Divisoon \n4.Multiplication\n");
    printf("\nEnter your choice - ");
    scanf("%d",&choice);

    switch(choice){
        case 1: printf("\nEnter two numbers to add :");
                scanf("%d%d",&a,&b);
                sum = a+b;
                printf("\nSum is %d",sum);
        break;

        case 2: printf("\nEnter two numbers to subtract -");
                scanf("%d%d",&a,&b);
                sub=a-b;
                printf("\nsubtraction is %d",sub);
        break;

        case 3:printf("\nEnter two numbers to divide -");
                scanf("%d%d",&a,&b);
                div=a/b;
                printf("\ndivison is %d",div);
        break;
        case 4:printf("\nEnter two numbers to multiply -");
                scanf("%d%d",&a,&b);
                mul=a*b;
                printf("\nmultiplication is %d",mul);
        break;

        default:printf("\nExit");
        break;
    }
    return 0;
}
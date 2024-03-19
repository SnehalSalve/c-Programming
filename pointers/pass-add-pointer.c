#include<stdio.h>

void swap(int *n1, int *n2)//here n1 n2 pointer accepts these arguments
{
    int temp=*n1;
    *n1=*n2;
    *n2=temp;
}

void increment(int *ptr)//
{
    (*ptr)++;
}
int main(){

    int num1=2,num2=5;

    //pass  to addreess of num 1 num2 to unctions
    swap(&num1,&num2); 
    printf("\nnum1 = %d",num1);
    printf("\nnum2 = %d",num2);

    int *p;
    int i=10;
    p=&i;
    printf("\n check value of i before calling function = %d",*p);
 
    increment(p);

    printf("\n check value of i after calling function = %d",*p);
    return 0;
}
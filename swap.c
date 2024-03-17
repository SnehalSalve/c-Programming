#include<stdio.h>
int main(){
    int a, b,temp;
    a=5;
    b=3;
    printf("\na=%d b=%d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\na=%d b=%d",a,b);
    return 0;
}
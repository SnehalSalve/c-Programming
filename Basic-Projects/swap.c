#include<stdio.h>
int main(){
    int a,b,temp;

    a=5;
    b=7;

    
    printf("\n a %d b %d before swapping",a,b);

    temp = a;
    a=b;
    b=temp;

    printf("\n a %d b %d after swapping",a,b);
    return 0;
}
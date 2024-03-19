//pointers
//pointers and arrays
//pointers and functions
//memory allocation
#include<stdio.h>
int main(){

    // datatype *ptr;
    //pinter decleration  int *ptr

    //pointer initialization int *ptr = &variableName
    // int a=5;
    // int *ptr;
    // ptr =&a;

    //pointer dereferencing *

    int var=10;
    int *ptr;
    ptr =&var;

    printf("\nvalue at ptr=%p",ptr); //display garbage value
    printf("\nvalue at var=%d",var); //display initilaized value of var
    printf("\nvalue at *ptr=%d",*ptr); // display value of pointing of var which is inside var value
    return 0;
}
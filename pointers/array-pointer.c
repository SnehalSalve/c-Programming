#include<stdio.h>
int main(){

    int arr[5];
    int i;

    for(i=0;i<5;i++){
        printf("\n &arr[%d] = %p",i,&arr[i]);
    }
    printf("\nAddress of array arr = %p",arr); //address of arr and arr[0] is same because variable name arr points to first element of array.
    
    int a[5]={10,7,-3,0,17};
    int *ptr;
    ptr=&a[1]; // it is pointing to third index value of array

    printf("\n *ptr = %d",*ptr); // prints 3
    printf("\n *(ptr+1) = %d",*(ptr+1)); //prints 3+1 =4 index value = 4
    printf("\n *(ptr-1) =%d",*(ptr-1)); //prints 3-1 =2 index value = 2
    return 0;
}
#include<stdio.h>
//missing a number an array
void OKFind(int a[],int n){

    int i,search;
    search = (n+1)*(n+2)/2;

    for(i=0;i<n;i++)
        search = search - a[i];
    printf("%d",search); 
    
}
int main(){

    int arr[]={1,2,3,5,6};
    //sort an array
    //0th index start a loop till end
    

    //sizeof(Array_name): It is an operator that returns the size of the entire array in bytes.
    //sizeof(Array_name[index]): It returns the size of a single element in the array in bytes.
    int size = sizeof(arr)/sizeof(arr[0]);
    OKFind(arr,size);
    return 0;
}
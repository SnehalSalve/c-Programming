#include<stdio.h>

void reverse(int a[],int s){

    int rev[s];
    int i;
    for(i=0;i<s;i++){
        rev[i] = a[s-i-1];
    }
    
    printf("\nAfter reversing array\n ");
     for(i=0;i<s;i++){
        printf("\t%d",rev[i]);
    }

}

int main(){

    int arr[]={1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]);
   // printf("\nSize of array is -%d",size);
    
    printf("\nBefore reversing array\n ");
        for(int i=0;i<size;i++){
            printf("\t%d",arr[i]);
    }
    reverse(arr,size);
return 0;
}
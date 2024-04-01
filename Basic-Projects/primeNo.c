#include<stdio.h>
#include<stdbool.h>

int main(){

    int i, n=6;
    for(i=1;i<n;i++){
        if(n==1 || n==0){
            printf("\nnot prime");
        }
        if(n%i==0){
        printf("\nprime");
}

    }

    return 0;
}
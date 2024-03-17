#include<Stdio.h>
int main(){

    int a[]= {1,2,5,6,4};
    int i;
    
    int len= sizeof(a)/sizeof(a[0]);
    printf("%d",len);
    for(i=0;i<len;i++)
        printf("\n array index %d is = %d ",i,a[i]);
    return 0;
}
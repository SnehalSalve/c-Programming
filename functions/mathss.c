#include<stdio.h>
#include<math.h>
int main(){

    double n;
    printf("\nEnter a number to perform a task - ");
    scanf("%lf",&n);

    printf("\n%lf",cbrt(n));
    printf("\n%lf",sqrt(n));
    printf("\n%lf",log(n));
    printf("\n%lf",fabs(n));
    return 0;
}
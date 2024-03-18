// functions
// user define functions
 //function types - 1- library function(inbuilt functions) 2- user defined functions
 //recursion
 //storage class
 
 //syntax of functions in c-
 //returntype functionName(parameter 1,parameter 2){ body}
 //int add(int a,int b);

 #include<stdio.h>
 #include<math.h>

//this is user defined function
 int add(int a,int b){
    printf("%d",a+b);
 }

 int main(){

int n,n1;
    add(2,5);

     printf("\nenter number to find power-");
     scanf("%d",&n);

       printf("\nenter number of power-");
     scanf("%d",&n1);
    int p=pow(n,n1); //this is in built function
    printf("%d",p);
    return 0;
 }

#include<stdio.h>

void function1(){
    int userNo;
    printf("\n Enter a number to guess secret number");
    scanf("%d",&userNo);
}

void function2(int userNo){
     int secrectNo=3;
    if(secrectNo==userNo){
        printf("\nSucessfully guess the secrect number");
    }
    else{
        //call a function
        function1(userNo);

        // for(i=0;i<=3;i++){
        //     printf("\n Again Enter a number to guess secret number");
        //     scanf("%d",&userNo);
        //     if(secrectNo==userNo){
        //     printf("\nSucessfully guess the secrect number");
        // }
    }
    
}
int main(){

    //geuss the number game
   
    int userNo,i;
    function1();
    function2(userNo);
    
    return 0;
}
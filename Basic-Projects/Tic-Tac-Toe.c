//to not to display box again again  check "t.c" file

#include<stdio.h>

void printBoard();
int checkWin();
void system(); 

    //setep 2- above box is static, we need to make it dynamic, so create an char array[] = '0' '1'...
    //create an array
    char board[] ={'0','1','2','3','4','5','6','7','8','9'};

void main(){

    int player=1;
    int status=-1;
    int input;
    
    printBoard();
    
    
    while(status==-1){
        player=(player%2==0)? 2 :1;
        char mark=(player==1)? 'X' : 'O';

        printf("\nEnter a number for player %d : ",player);
        scanf("%d",&input);

    if(input<1 || input>9){
        printf("\nInvalid Input");
    }
    
   
        board[input] = mark;
        printBoard();

        int result =checkWin();

        if(result==1){
            printf("\nplayer %d is the winner",player);
            return;
        }else if(result==0){
            printf("\ndraw");
            return;
        }
        player++;
    }
}

void printBoard()
{
    //system("clear"); //if dont want to display again n again board use to clear screen using this system(clear) 
    printf("\n\n");
    printf("\n\t----Tic Tac toe---\n\n");
    //step 1 - create basic boxes 
    // printf("\t     |     |    \n");
    // printf("\t  1  |  2  |  3  \n");
    // printf("\t_____|_____|_____\n");
    // printf("\t     |     |     \n");
    // printf("\t  4  |  5  |  6  \n");
    // printf("\t_____|_____|_____\n");
    // printf("\t     |     |     \n");
    // printf("\t   7 |  8  |  9  \n");
    // printf("\t     |     |     \n");
    printf("\n");
    //step 3 -remove numbers and put %c to get dyanamic input
    printf("\t     |     |     \n");
    printf("\t  %c  |  %c  |  %c  \n",board[1],board[2],board[3]);
    printf("\t_____|_____|_____\n");
    printf("\t     |     |     \n");
    printf("\t  %c  |  %c  |  %c  \n",board[4],board[5],board[6]);
    printf("\t_____|_____|_____\n");
    printf("\t     |     |     \n");
    printf("\t   %c |  %c  |  %c  \n",board[7],board[8],board[9]);
    printf("\t     |     |     \n");

}

int checkWin(){
    //total 8 conditions are avaliable
    //condition 1
    if(board[1]==board[2] && board[2]==board[3]){
        return 1;
    }
    //condition 2
     if(board[1]==board[4] && board[4]==board[7]){
        return 1;
    }
    //condition 3
     if(board[7]==board[8] && board[8]==board[9]){
        return 1;
    }
    //condition 4
     if(board[1]==board[4] && board[4]==board[7]){
        return 1;
    }
    //condition 5
     if(board[2]==board[5] && board[5]==board[8]){
        return 1;
    }
    //condition 6
     if(board[3]==board[6] && board[6]==board[9]){
        return 1;
    }
    //condition 7
     if(board[1]==board[5] && board[5]==board[9]){
        return 1;
    }
    //condition 8
     if(board[3]==board[5] && board[5]==board[7]){
        return 1;
    }

    int count=0;
    for(int i=1;i<=9;i++)
    {
        if(board[i]=='X' || board[i]=='O'){
            count++;
        }
    }

    if(count==9){
        return 0;
    }
    return -1;
}
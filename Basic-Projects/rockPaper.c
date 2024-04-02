// rock(stone) vs paper = paper wins.
// rock vs scissor = stone wins.
// paper vs scissor = scissor wins.

#include <stdio.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>

int game(char user, char computer)
{
    //if user == compter tie
    // if(user wins){
    //     return 1;
    // }else if(computer wins){
    //     return 0;
    // }else{
    //     printf("\n its tie");
    //     return -1;
    // }

    if (user == computer)
        return -1;

    // 1st condition
    if (user == 's' && computer == 'p')
        return 0;
    else if (user == 'p' && computer == 's')
        return 1;

    // 2nd condition
    if (user == 's' && computer == 'z')
        return 1;
    else if (user == 'z' && computer == 's')
        return 0;

    // 3rd condition
    if (user == 'p' && computer == 'z')
        return 0;
    else if (user == 'z' && computer == 'p')
        return 1;
}

#include <stdio.h>
int main()
{

    // step 1- generete random numbers for computer input

    int n;
    char user, computer;
    srand(time(NULL)); // needs to check validations
    // random number rang 100
    n = rand() % 100;
    
    // for computer
    if (n > 20)
    {
        computer = 's';
    }
    else if (n > 20 && n < 60)
    {
        computer = 'p';
    }
    else
    {
        computer = 'z';
    }

    printf("\n\n\n");
    printf("\nEnter your choice \ns for stone \np for paper \nz for scissor\n");
    scanf("%c", &user);
    
    printf("\nvalue of %c",computer);

    int result = game(user, computer);

    if (result == -1)
    {
        printf("\nits Draw");
    }
    else if (result == 1)
    {
        printf("\nYou won this round");
    }
    else
    {
        printf("\nYou lose this round");
    }

    return 0;
}
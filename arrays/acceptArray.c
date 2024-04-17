// from user =
// 1 take array elements from user. ✔️
// 2 take element from user to search.
// 3 match a search element in the array.
// 4 print a element if found or else print not found.

// In this code:

// We first prompt the user to enter the size of the array.
// Based on the input size, we declare an array of integers.
// We then use a loop to accept each element from the user.
// Finally, we display the entered elements of the array.
#include<stdio.h>
int main(){

    //1 accept size of array from user
    int size_of_array;
    printf("\nEnter how many elements you want in array :");
    scanf("%d",&size_of_array);


    //2 declare size of array
    int my_array[size_of_array];

    //3 accept elements from user
    printf("\nEnter elements of the array :\n");
    for(int i=0;i<size_of_array;i++)
    {
        printf("\nElement of array %d : ",i+1);
        scanf("%d",&my_array[i]);
    }

    //4 display elements of array
    for (int i = 0; i < size_of_array; i++)
    {
        printf("\t [%d]",my_array[i]);
    }
    printf("\n");
    return 0;
}